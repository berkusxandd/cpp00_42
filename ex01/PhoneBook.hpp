#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "includes.hpp"
#include "Contact.hpp"
class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void add_contact();
		void search_contact();
	private:
		Contact contacts[8];
		int current_nb;
		int contact_count;
};

#endif
