#ifndef SECRET_HPP
#define SECRET_HPP

class Secret {

	//protected:
		//std::string key;


	public:
		std::string message;

		Secret(std::string m) {
			message = m;
			//key = k;
		}

		virtual void encrypt(std::string key) = 0;
		virtual void decrypt(std::string key) = 0;

		void display();

};
#endif
