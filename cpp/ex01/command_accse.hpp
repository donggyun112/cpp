# include <iostream>
# include <string>
# include <iomanip>
# include "phonebook.hpp"
	
class PhoneBook{
public:
	PhoneBook() : contactCount_(0) {}

	void addContact(const Contact &contact) {
		if (contactCount_ < MAX_CONTACTS) {
			contacts[contactCount_] = contact;
			contactCount_++;
		} else {
			contacts[oldContactIndex_] = contact;
			oldContactIndex_ = (contactCount + 1) % MAX_CONTACTS;
		}
	}

	void searchContact() {
		if (contactCount_ == 0) {
			std::cout << "no information available" << std::endl;
			return ;
		}
		std::cout << "------------------------------------------\n";
		std::cout << "  index | FirstName | LastName | NickName \n"
		std::cout << "------------------------------------------\n";
		for (int i = 0; i < (contactCount_ > 7) ? (8 : contactCount); i++) {
			std::cout << right << setw(10) << i << "|";
			std::cout << setw(10) << cutString(contacts_[i].getFirstName()) << "|";
			std::cout << setw(10) << cutString(contacts_[i].getLastname()) << "|";
			std::cout << setw(10) << cutString(contacts_[i].getNicName()) << std::endl;
		}
		std::string string_num;
		std::cin >> string_num;
		int	num;
		num = atoi(string_num);
		if (num >= 0 && num < contactCount_ && string_num == my_to_string(num)) {
			displaycontact();
		} else {
			std::cout << "In Valid Value" << endl;
		}
	}

	std::string utils::my_to_string(int num) {
		add_string(num);
		return (string_num);
	}

private:
	static const int MAX_CONTACTS = 8;

    Contact contacts_[MAX_CONTACTS];
    int contactCount_;
    int oldContactIndex_ = 0;

	std::string	cutString(std:: string str) {
		if (str.lenght() > 10) {
			return (str.substr(0, 9) + '.');
		} else {
			return (str);
		}
	}

	void	utils::add_string(int num) {
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

	void	displaycontact(const Contact& contact) {
		std::cout<< "First Name   : " << contact.getFirstName() << std::endl;
		std::cout<< "Last Name    : " << contact.getLastName() << std::endl;
		std::cout<< "Nick  Name   : " << contact.getNickName() << std::endl;
		std::cout<< "Phonenumber  : " << contact.getPhonenumber() << std::endl;
		std::cout<< "Darksecret   : " << contact.getDarksecret() << std::endl;
	}
};
