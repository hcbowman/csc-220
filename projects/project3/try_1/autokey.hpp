#ifndef AUTOKEY_HPP
#define AUTOKEY_HPP

#include<iostream>
#include"secret.hpp"

using namespace std;

class Autokey : public Secret {

	public:
		std::string key;

		Autokey(std::string m, std::string k) : Secret (m) {
			key = k;
		}

		void encrypt(std::string key);
		void decrypt(std::string key);

};

#endif
