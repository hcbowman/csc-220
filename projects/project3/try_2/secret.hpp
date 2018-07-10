#ifndef SECRET_HPP
#define SECRET_HPP

class Secret {
	
	public:
	
		Secret(std::string m, std::string k) {
			message = m;
			key = k;
		}
		
		virtual void encrypt(std::string key);
		virtual void decrypt(std::string key);
		
		void display(); 

};

#endif
