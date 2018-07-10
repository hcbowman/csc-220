#ifndef VIGENERE_HPP
#define VIGENERE_HPP

#include<iostream>
#include"secret.hpp"

using namespace std;

class Vigenere : public Secret {

	public:
		Vigenere(std::string m, std::string k) : Secret (m, k) {

		}

		void encrypt(std::string key);
		void decrypt(std::string key);

};

#endif
