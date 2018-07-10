CC=g++
CPPFLAGS=--std=c++11 -Wall -pedantic

all: project3.cpp secret.o vigenere.o caesar.o autokey.o
	$(CC) $(CPPFLAGS) project3.cpp secret.o vigenere.o caesar.o autokey.o -o encrypt

secret.o: secret.cpp
	$(CC) $(CPPFLAGS) -c secret.cpp

vigenere.o: vigenere.cpp
	$(CC) $(CPPFLAGS) -c vigenere.cpp

caesar.o: caesar.cpp
	$(CC) $(CPPFLAGS) -c caesar.cpp

autokey.o: autokey.cpp
	$(CC) $(CPPFLAGS) -c autokey.cpp

clean:
	rm -f *.o *.exe *.stackdump
