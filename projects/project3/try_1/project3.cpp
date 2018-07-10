#include<iostream>

#include"secret.hpp"
#include"autokey.hpp"
#include"caesar.hpp"
#include"vigenere.hpp"

using namespace std;

#define C_SIZE 3

void print_cipher(Secret * s) {
  s->display();
	cout << "encrypt : " << s->encrypt(std::string key) << endl;
	cout << "decrypt : " << s->decrypt(std::string key) << endl;
}

int main() {

	int i;
	Secret * cipher[C_SIZE];

	cout << "BEGIN" << endl;

	cipher[0] = new Vigenere("This is a test", "key");

	cipher[1] = new Caesar("This is also a test", "key");

	cipher[2] = new Autokey("This is the last test", "key");


	for( i=0; i<C_SIZE; i++)  {
    cout <<"\nMessage " << i << endl;
    print_cipher(cipher[i]);
	}


	cout << "\nEND" << endl;

	return 0;

}
