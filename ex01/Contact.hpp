#ifndef CONTACT_HPP
#define CONTACT_HPP
#include "includes.hpp"

class Contact
{
	public:
		Contact();
		~Contact();
		void setName(std::string name);
		void setLastName(std::string last_name);
		void setNickname(std::string nick_name);
		void setNumber(std::string number);
		void setSecret(std::string secret);
		std::string getName();
		std::string getLastName();
		std::string getNickname();
		std::string getNumber();
		std::string getSecret();
	private:
		std::string first_name,last_name,nickname,number,secret;
};

#endif
