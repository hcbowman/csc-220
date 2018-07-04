
all: project2.c matrix.o
	gcc -ansi -pedantic -Wall project2.c matrix.o -o matrix

matrix.o : matrix.c
	gcc -ansi -pedantic -Wall -c matrix.c

.PHONY: clean
clean:
	rm -f *.o *.exe *.stackdump