#include "Contact.hpp"

Contact::Contact()
{
}
Contact::~Contact()
{
}
void Contact::setName(std::string name)
{
	this->first_name = name;
}

void Contact::setLastName(std::string last_name)
{
	this->last_name = last_name;
}

void Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::setNumber(std::string number)
{
	this->number = number;
}

void Contact::setSecret(std::string secret)
{
	this->secret = secret;
}
std::string Contact::getName()
{
	return (this->first_name);
}

std::string Contact::getLastName()
{
	return (this->last_name);
}

std::string Contact::getNickname()
{
	return (this->nickname);
}

std::string Contact::getNumber()
{
	return (this->number);
}

std::string Contact::getSecret()
{
	return (this->secret);
}
