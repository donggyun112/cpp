#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <stdio.h>
#include <cstring>
#include <stdlib.h>
# include <iomanip>
# include "phonebook.hpp"
#include "contact.hpp"

class Contact;

class PhoneBook{
public:
	PhoneBook() : contactCount_(0), oldContactIndex_(0) {}
	void addContact(const Contact &contact);

	void searchContact();

	std::string my_to_string(int num);

	std::string string_num;

private:
	static const int MAX_CONTACTS = 8;
	
    Contact contacts_[MAX_CONTACTS];
    int contactCount_;
    int oldContactIndex_;

	std::string	cutString(std:: string str);

	void	add_string(int num, std::string & string_num);

	void	displaycontact(const Contact & contact);
};

#endif
