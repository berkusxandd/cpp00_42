#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "includes.hpp"
PhoneBook::PhoneBook()
{
	this->current_nb = 0;
	contact_count = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::search_contact()
{
	std::string name,last_name,nickname,number,secret;
	std::string line;
	int index;

	if (this->contact_count == 0)
		std::cout << "there are no contacts to show." << std::endl;
	else
	{
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "firstname" << "|";
	std::cout << std::setw(10) << "lastname" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < this->contact_count; i++)
	{
		name = ((this->contacts[i].getName()).length() < 10) ? this->contacts[i].getName() : name.substr(0, 9) + ".";
		last_name = ((this->contacts[i].getLastName()).length() < 10) ? this->contacts[i].getLastName() : last_name.substr(0, 9) + ".";
		nickname = ((this->contacts[i].getNickname()).length() < 10) ? this->contacts[i].getNickname() : nickname.substr(0, 9) + ".";
		number = ((this->contacts[i].getNumber()).length() < 10) ? this->contacts[i].getNumber() : number.substr(0, 9) + ".";
		secret = ((this->contacts[i].getSecret()).length() < 10) ? this->contacts[i].getSecret() : secret.substr(0, 9) + ".";
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << name << "|";
		std::cout << std::setw(10) << last_name << "|";
		std::cout << std::setw(10) << nickname << std::endl;
	}
	std::cout << "type an index that you want to see more information about.\n>";
	getline(std::cin, line);
	index = atoi(line.c_str());
	if (index < 0 || index > 7 || !line[0] || index >= this->contact_count)
	{
		std::cout << "the index you typed is not valid.\n"; 
		return ;
	}
	std::cout << "name: " << this->contacts[index].getName() << std::endl;
	std::cout << "last name: " << this->contacts[index].getLastName() << std::endl;
	std::cout << "nickname: " << this->contacts[index].getNickname() << std::endl;
	std::cout << "number: " << this->contacts[index].getNumber() << std::endl;
	std::cout << "darkest secret: " << this->contacts[index].getSecret() << std::endl;
	return ;
	}
}

void PhoneBook::add_contact()
{
	Contact contact;
	std::string line;
	std::string id;

	std::cout << "type the first name of the contact \n>";
	getline(std::cin,line);
	if (!line[0])
	{
		std::cout << "information cannot be empty. aborted...\n";
		return ;
	}
	contact.setName(line);
	system("clear");

	std::cout << "type the last name of the contact \n>";
	getline(std::cin,line);
	if (!line[0])
	{
		std::cout << "information cannot be empty. aborted...\n";
		return ;
	}
	contact.setLastName(line);
	system("clear");

	std::cout << "type the nickname of the contact \n>";
	getline(std::cin,line);
	if (!line[0])
	{
		std::cout << "information cannot be empty. aborted...\n";
		return ;
	}
	contact.setNickname(line);
	system("clear");

	std::cout << "type the phone number of the contact \n>";
	getline(std::cin,line);
	if (!line[0])
	{
		std::cout << "information cannot be empty. aborted...\n";
		return ;
	}
	contact.setNumber(line);
	system("clear");

	std::cout << "type a secret of the contact \n>";
	getline(std::cin,line);
	if (!line[0])
	{
		std::cout << "information cannot be empty. aborted...\n";
		return ;
	}
	contact.setSecret(line);
	system("clear");

	this->contacts[this->current_nb] = contact;
	this->current_nb++;
	if (this->current_nb == 8)
		this->current_nb = 0;
	else
		this->contact_count++;
}

