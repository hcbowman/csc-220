run: project1make
	./encrypt.exe

project1make: project1_3.c
	gcc -ansi -pedantic -Wall project1_3.c encrypt.c decrypt.c -o encrypt
	gcc -ansi -pedantic -Wall project1_3.c encrypt.c decrypt.c -o decrypt
	
all: run
	
.PHONY: all run