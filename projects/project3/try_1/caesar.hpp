#ifndef CAESAR_HPP
#define CAESAR_HPP

#include<iostream>
#include"secret.hpp"

using namespace std;

class Caesar : public Secret {

	public:
		std::string key;

		Caesar(std::string m, std::string k) : Secret (m) {
			key = k;
		}

		void encrypt(std::string key);
		void decrypt(std::string key);

};

#endif
