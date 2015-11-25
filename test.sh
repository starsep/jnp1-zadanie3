#!/bin/bash
blk='\e[1;30m' # Black
red='\e[1;31m' # Red
grn='\e[1;32m' # Green
ylw='\e[1;33m' # Yellow
blu='\e[1;34m' # Blue
pur='\e[1;35m' # Purple
cyn='\e[1;36m' # Cyan
wht='\e[0;37m' # White
goodStatus=${grn}"OK"
badStatus=${red}"FAIL"

status=${goodStatus}

function ok {
	echo -e $1 ${goodStatus}${wht}
}

function fail {
	echo -e $1 ${badStatus}${wht}
	status=${badStatus}
}

function compile {
	make clean &> /dev/null
	make very_long_int.o &> /dev/null
	if [ $? -ne 0 ]; then
		fail 'make very_long_int.o'$1
	else
		ok 'make very_long_int.o'$1
	fi
	echo
}

function compile_example {
	make example$1 &> /dev/null
	if [ $? -ne 0 ]; then
		fail 'make example'$1
	else
		ok 'make example'$1
	fi

	if [ $# -ge 2 ]; then
		shift 1
		compile_example $*
	else
		echo
	fi
}

function compile_bad {
	make bad_example$1 &> /dev/null
	if [ $? -ne 0 ]; then
		ok 'make bad_example'$1
	else
		fail 'make bad_example'$1
	fi

	if [ $# -ge 2 ]; then
		shift 1
		compile_bad $*
	else
		echo
	fi
}

function test_normal {
	echo -n "NORMAL "
	/usr/bin/time -f "%U" ./example$1 > out 2> lel
	codeStatus=$?
	cat lel | tr -d '\n'
	echo -n " "
	if [ ${codeStatus} -ne 0 ] || [ -s out ] ; then
		fail
	else
		ok
	fi
}

function test_valgrind {
	echo -n "VALGRIND "
	/usr/bin/time -f "%U" valgrind -q --log-file=lel3 ./example$1 > out 2> lel
	codeStatus=$?
	cat lel | tr -d '\n'
	echo -n " "
	if [ ${codeStatus} -ne 0 ] || [ -s out ] ; then
		fail
	else
		ok
	fi
}

function test_example {
	echo -e ${pur}"TEST"$1":"${wht}
	test_normal $1
	test_valgrind $1
	echo
	rm -f out lel lel2 lel3
	if [ $# -ge 2 ]; then
		shift 1
		test_example $*
	fi
}

function end_check {
	echo -e "TESTS "${status}
}

compile
compile_example 1 2 3 4
compile_bad 1 2 3 4 5 6
test_example 1 2 3 4
end_check
