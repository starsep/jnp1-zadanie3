COMPILER=g++
CFLAGS=-Wall -Wunused -Wshadow -pedantic -O2 -std=c++11 -g
OBJECTS=example1 example2 example3
BAD_OBJECTS=bad_example1 bad_example2 bad_example3 bad_example4 bad_example5 bad_example6

all: $(OBJECTS)

bad: $(BAD_OBJECTS)

very_long_int.o: very_long_int.h very_long_int.cc
	$(COMPILER) -c $(CFLAGS) -o very_long_int.o very_long_int.cc

example%: example%.cc very_long_int.o
	$(COMPILER) $(CFLAGS) -o $@ $^

bad_example%: bad_example%.cc very_long_int.o
	$(COMPILER) $(CFLAGS) -o $@ $^

clean:
	rm -f *.o $(OBJECTS) $(BAD_OBJECTS)
