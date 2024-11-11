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
		if (!getline(std::cin,line) || line.empty())
		{
			std::cout << "input cannot be null." << std::endl;
			return 1;
		}
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
