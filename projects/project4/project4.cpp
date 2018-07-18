#include<iostream>

#include"matrix.hpp"

using namespace std;


void print_cipher(Secret * s) {
  s->print();
}

int main() {

	int i;
	Matrix * ms[6];

	cout << "BEGIN" << endl;


	for( i=0; i<6; i++)  {
    cout <<"\nMessage " << i << endl;
    print_cipher(ms[i]);
	}


	cout << "\nEND" << endl;

	return 0;

}
