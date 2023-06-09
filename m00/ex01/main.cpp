#include "phonebook.hpp"
#include "contact.hpp"
# include <iomanip>



void	init_(Contact &contact, PhoneBook &book)
{
	std::string firstname, lastname, nickname, phonenumber, secret;
	std::cout << "firstname : ";
	std::getline(std::cin, firstname);
	std::cout << "lastname : ";
	std::getline(std::cin, lastname);
	std::cout << "nickname : ";
	std::getline(std::cin, nickname);
	std::cout << "phonenumber : ";
	std::getline(std::cin, phonenumber);
	std::cout << "secret : ";
	std::getline(std::cin, secret);

	contact.setFirstName(firstname);
	contact.setLastName(lastname);
	contact.setNickname(nickname);
	contact.setPhoneNumber(phonenumber);
	contact.setDarkestSecret(secret);

	book.addContact(contact);
}

int main(void)
{
	std::string cmd;
	Contact	contact;
	PhoneBook	book;

	while (cmd != "EXIT")
	{
		std::cout<<"cmd(ADD/SEARCH/EXIT)";
		std::getline(std::cin, cmd);
		if (std::cin.eof() || std::cin.fail())
			break ;
		if (cmd == "ADD")
			init_(contact, book);
		if (cmd == "SEARCH")
			book.searchContact();
	}
}