CC=g++
CPPFLAGS=--std=c++11 -Wall -pedantic

all: main.cpp exams.o
	$(CC) $(CPPFLAGS) main.cpp exams.o -o exams

exams.o: exams.cpp
	$(CC) $(CPPFLAGS) -c exams.cpp

clean:
	rm -f *.o *.exe *.stackdump
