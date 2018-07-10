#include<iostream>
#include"secret.hpp"

using namespace std;

class Vignere : public secret {
	
	public:
	
		void encrypt(std::string key);

		void decrypt(std::string key);
		

}
