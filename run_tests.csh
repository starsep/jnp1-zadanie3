#!/bin/csh

set from = (101 201 301 401 501 601)
set good = (  9   8  63  18  23   5)
set bad  = ( 62   7   0   0  16   0)

if (${#argv} != 1) then
  echo "Pomocniczy skrypt wykonujący właściwe testy."
  echo "Nie wywołuj go bezpośrednio."
endif

set team=$1

alias print echo "@"

set solution_src=very_long_int.cc
set solution_obj=very_long_int.o
set test_src=very_long_int_test.cc

set comp = "g++ -std=c++11 -O2 -Wall"
set comp_bad = "g++ -c -std=c++11 -w -fmax-errors=1"

cp $test_src $team
pushd $team >& /dev/null

@ sum = 0

$comp -c $solution_src -o $solution_obj
if ($status == 0) then
  print "Kompilowanie $solution_src PASS"
else
  print "Kompilowanie $solution_src FAIL"
endif

foreach i (`seq 1 6`)
  if ($good[$i] + $bad[$i] != 0) then
    echo "###########"
    echo "# Grupa $i #"
    echo "###########"

    @ pass = 0
    @ fail = 0
    @ error = 0

    # Testy, które powinny się zakończyć poprawnie.
    @ b = $from[$i]
    @ e = $from[$i] + $good[$i] - 1
    if ($b <= $e) then
      foreach test (`seq $b $e`)
        print "TEST $test"
        $comp -DTEST_NUM=$test $test_src $solution_obj -o test_$test
        if ($status == 0) then
          ./test_$test
          if ($status == 0) then
            print "TEST $test PASS"
            @ pass++
          else
            print "TEST $test FAIL"
            @ fail++
          endif
        else
          print "TEST $test ERROR"
          @ error++
        endif
      end
    endif

    # Testy, które powinny się zakończyć błędem kompilacji.
    @ b = $e + 1
    @ e = $e + $bad[$i]
    if ($b <= $e) then
        foreach test (`seq $b $e`)
            print "TEST $test"
            $comp_bad -DTEST_NUM=$test $test_src -o test_${test}.o >& /dev/null
            if ($status == 0) then
                print "TEST $test ERROR (skompilowal sie)"
                @ error++
            else
                print "TEST $test PASS"
                @ pass++
            endif
        end
    endif

    @ count = $good[$i] + $bad[$i]
    print "STATYSTYKI: PASS=$pass/$count, FAIL=$fail/$count, ERROR=$error/$count"
    if ($pass == $count) then
      set result="1"
    else
      set result="0"
    endif
    print "PUNKTY: $result"

    @ sum = $sum + $result
  endif
end

echo "###########"
print "OCENA ${team:t}: $sum"

rm -rf $test_src *.o *test*
popd >& /dev/null
