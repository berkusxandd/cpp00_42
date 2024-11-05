#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "includes.hpp"
PhoneBook::PhoneBook()
{
	this->current_nb = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::search_contact()
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << this->contacts[i].getName() << std::endl;
		std::cout << this->contacts[i].getLastName() << std::endl;
		std::cout << this->contacts[i].getNickname() << std::endl;
		std::cout << this->contacts[i].getNumber() << std::endl;
		std::cout << this->contacts[i].getSecret() << std::endl;
	}
}

void PhoneBook::add_contact()
{
	Contact contact;
	std::string line;
	std::string id;

	if (this->current_nb == 8)
		this->current_nb = 0;

	std::cout << "type the first name of the contact \n>";
	getline(std::cin,line);
	contact.setName(line);
	system("clear");

	std::cout << "type the last name of the contact \n>";
	getline(std::cin,line);
	contact.setLastName(line);
	system("clear");

	std::cout << "type the nickname of the contact \n>";
	getline(std::cin,line);
	contact.setNickname(line);
	system("clear");

	std::cout << "type the phone number of the contact \n>";
	getline(std::cin,line);
	contact.setNumber(line);
	system("clear");

	std::cout << "type a secret of the contact \n>";
	getline(std::cin,line);
	contact.setSecret(line);
	system("clear");

	this->contacts[this->current_nb] = contact;
}

