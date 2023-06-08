#include "phonebook.hpp"
#include "command_accse.hpp"



Contact    init_(Contact &contact, )
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
}

int main(void)
{
	std::string cmd;
	Contact	contact;

	while (1)
	{
		std::cout<<"cmd(ADD/SEARCH/EXIT)";
		std::getline(std::cin, cmd);
		if (std::cin.eof() || std::cin.fail())
			break ;
        if (cmd == "ADD")
			init_(contact);
		if (cmd == "SEARCH")
            book[i].SEARCH();
        if (cdm == "EXIT")
            book[i].EXIT();
	}
}