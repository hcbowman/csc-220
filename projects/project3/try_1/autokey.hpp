#ifndef AUTOKEY_HPP
#define AUTOKEY_HPP

#include<iostream>
#include"secret.hpp"


class Autokey : public Secret {

	public:

		Autokey(std::string m, std::string k) : Secret (m, k) {
			key = k;
		}

		void encrypt(std::string key);
		void decrypt(std::string key);

};

#endif
