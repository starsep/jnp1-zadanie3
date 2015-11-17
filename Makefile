COMPILER=g++
CFLAGS=-Wall -O2 -std=c++11 -g
OBJECTS=example1 bad_example1 bad_example2 bad_example3 bad_example4 bad_example5 bad_example6

all: $(OBJECTS)

very_long_int.o: very_long_int.h very_long_int.cc
	$(COMPILER) -c $(CFLAGS) -o very_long_int.o very_long_int.cc

example1: example1.cc very_long_int.o
	$(COMPILER) $(CFLAGS) -o $@ $^

bad_example1: bad_example1.cc very_long_int.o
	$(COMPILER) $(CFLAGS) -o $@ $^

bad_example2: bad_example2.cc very_long_int.o
	$(COMPILER) $(CFLAGS) -o $@ $^

bad_example3: bad_example3.cc very_long_int.o
	$(COMPILER) $(CFLAGS) -o $@ $^

bad_example4: bad_example4.cc very_long_int.o
	$(COMPILER) $(CFLAGS) -o $@ $^

bad_example5: bad_example5.cc very_long_int.o
	$(COMPILER) $(CFLAGS) -o $@ $^

bad_example6: bad_example6.cc very_long_int.o
	$(COMPILER) $(CFLAGS) -o $@ $^

clean:
	rm -f *.o $(OBJECTS)