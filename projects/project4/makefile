CC=g++
CPPFLAGS=--std=c++11 -Wall -pedantic

all: project4.cpp matrix.o
	$(CC) $(CPPFLAGS) project4.cpp matrix.o -o matrix

matrix.o: matrix.cpp
	$(CC) $(CPPFLAGS) -c matrix.cpp

clean:
	rm -f *.o *.exe *.stackdump
