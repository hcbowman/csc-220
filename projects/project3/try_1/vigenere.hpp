#ifndef VIGENERE_HPP
#define VIGENERE_HPP

#include<iostream>
#include"secret.hpp"

using namespace std;

class Vigenere : public Secret {

	public:
		std::string key;

		Vigenere(std::string m, std::string k) : Secret (m) {
			key = k;
		}

		void encrypt(std::string key);
		void decrypt(std::string key);

};

#endif
