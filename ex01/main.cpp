#include "includes.hpp"
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	std::string line;
	PhoneBook phonebook;

	system("clear");
	while (1)
	{
		std::cout << "type a command (ADD SEARCH EXIT)\n>";
		getline(std::cin,line);
		system("clear");
		if (!line.compare("EXIT"))
			break;
		if (!line.compare("ADD"))
			phonebook.add_contact();
		if (!line.compare("SEARCH"))
			phonebook.search_contact();
	}
	return 0;
}
