#ifndef COMMAND_ACCSE_HPP
# define COMMAND_ACCSE_HPP

# include <iostream>
# include <string>
# include <stdio.h>
#include <cstring>
#include <stdlib.h>
# include <iomanip>
# include "phonebook.hpp"
#include "command_accse.hpp"
	
class Contact;

class PhoneBook{
	
private:
	static const int MAX_CONTACTS = 8;
	
    Contact contacts_[MAX_CONTACTS];
    int contactCount_;
    int oldContactIndex_;

	std::string	cutString(std:: string str) {
		if (str.length() > 10) {
			return (str.substr(0, 9) + '.');
		} else {
			return (str);
		}
	}

	void	add_string(int num) {
		char data;
		if (num < 0)
		{
			num *= -1;
			this->string_num += "-";
		}
		if (num > 9)
			add_string(num / 10);
		data = (num % 10 + '0');
		this->string_num += data;
	}

	void	displaycontact(const Contact & contact);/* {
		std::cout<< "First Name   : " << contact.getFirstName() << std::endl;
		std::cout<< "Last Name    : " << contact.getLastName() << std::endl;
		std::cout<< "Nick  Name   : " << contact.getNickname() << std::endl;
		std::cout<< "Phonenumber  : " << contact.getPhoneNumber() << std::endl;
		std::cout<< "Darksecret   : " << contact.getDarkestSecret() << std::endl;
	}*/

public:
	PhoneBook() : contactCount_(0) {}
	void addContact(const Contact &contact) {
		if (contactCount_ < MAX_CONTACTS) {
			contacts_[contactCount_] = contact;
			contactCount_++;
		} else {
			contacts_[oldContactIndex_] = contact;
			oldContactIndex_ = (contactCount_ + 1) % MAX_CONTACTS;
		}
	}

	void searchContact() {
		if (contactCount_ == 0) {
			std::cout << "no information available" << std::endl;
			return ;
		}
		std::cout << "------------------------------------------\n";
		std::cout << "  index | FirstName | LastName | NickName \n";
		std::cout << "------------------------------------------\n";
		for (int i = 0; i < (contactCount_ > 7) ? 8 : contactCount_; i++) {
			std::cout << std::right << std::setw(10) << i << "|";
			std::cout << std::setw(10) << cutString(contacts_[i].getFirstName()) << "|";
			std::cout << std::setw(10) << cutString(contacts_[i].getLastName()) << "|";
			std::cout << std::setw(10) << cutString(contacts_[i].getNickname()) << std::endl;
		}
		std::cin >> this->string_num;
		int	num;
		num = std::atoi(this->string_num.c_str());
		if (num >= 0 && num < contactCount_ && string_num == my_to_string(num)) {
			displaycontact(contacts_[num]);
		} else {
			std::cout << "In Valid Value" << std::endl;
		}
	}

	std::string my_to_string(int num) {
		add_string(num);
		return (this->string_num);
	}

	std::string string_num;
};

void	PhoneBook::displaycontact(const Contact & contact)
{
		std::cout<< "First Name   : " << contact.getFirstName() << std::endl;
		std::cout<< "Last Name    : " << contact.getLastName() << std::endl;
		std::cout<< "Nick  Name   : " << contact.getNickname() << std::endl;
		std::cout<< "Phonenumber  : " << contact.getPhoneNumber() << std::endl;
		std::cout<< "Darksecret   : " << contact.getDarkestSecret() << std::endl;
}


#endif
