#include "phonebook.hpp"

std::string	PhoneBook::cutString(std:: string str) {
	if (str.length() > 10) {
		return (str.substr(0, 9) + '.');
	} else {
		return (str);
	}
}

void	PhoneBook::add_string(int num, std::string & string_num) {
	char data;
	if (num < 0)
	{
		num *= -1;
		string_num += "-";
	}
	if (num > 9)
		add_string(num / 10, string_num);
	data = (num % 10 + '0');
	string_num += data;
}

void	PhoneBook::displaycontact(const Contact & contact) {
	std::cout<< "First Name   : " << contact.getFirstName() << std::endl;
	std::cout<< "Last Name    : " << contact.getLastName() << std::endl;
	std::cout<< "Nick  Name   : " << contact.getNickname() << std::endl;
	std::cout<< "Phonenumber  : " << contact.getPhoneNumber() << std::endl;
	std::cout<< "Darksecret   : " << contact.getDarkestSecret() << std::endl;
}

void PhoneBook::addContact(const Contact &contact) {
	if (contactCount_ < MAX_CONTACTS) {
		contacts_[contactCount_] = contact;
		contactCount_++;
	} else {
		contacts_[oldContactIndex_] = contact;
		oldContactIndex_ = (contactCount_ + 1) % MAX_CONTACTS;
	}
}

void PhoneBook::searchContact() {
	if (contactCount_ == 0) {
		std::cout << "no information available" << std::endl;
		return ;
	}
	std::cout << "--------------------------------------------\n";
	std::cout << "   index  | FirstName| LastName |  NickName \n";
	std::cout << "--------------------------------------------\n";
	for (int i = 0; i < contactCount_; i++) {
    	std::cout << std::right << std::setw(10) << i << "|";
    	std::cout << std::setw(10) << cutString(contacts_[i].getFirstName()) << "|";
    	std::cout << std::setw(10) << cutString(contacts_[i].getLastName()) << "|";
    	std::cout << std::setw(10) << cutString(contacts_[i].getNickname()) << std::endl;
	}
	std::cout << "--------------------------------------------\n";

	std::string string_num;
	std::cout << "Find Info : ";
	std::cin >> string_num;
	int	num;
	num = std::atoi(string_num.c_str());
	if (num >= 0 && num < contactCount_ && (string_num == my_to_string(num))) {
		displaycontact(contacts_[num]);
	} else {
		std::cout << "In Valid Value" << std::endl;
	}
	std::cin.ignore();
}

std::string PhoneBook::my_to_string(int num) {
	std::string str;
	add_string(num, str);
	return (str);
}