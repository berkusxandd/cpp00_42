#include "includes.hpp"
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	int exit;
	std::string line;
	exit = 0;
	system("clear");
	PhoneBook phonebook;
	phonebook.add_contact();
	system("clear");
	phonebook.search_contact();
}
