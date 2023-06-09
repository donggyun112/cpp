#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
# include <iomanip>

class PhoneBook;


class Contact {
public:

    Contact() {}

	void setFirstName(const std::string& firstName);

	void setLastName(const std::string& lastName);

	void setNickname(const std::string& nickname);

	void setPhoneNumber(const std::string& phoneNumber);

    void setDarkestSecret(const std::string& darkestSecret);

    std::string getFirstName() const;

    std::string getLastName() const;

    std::string getNickname() const;

    std::string getPhoneNumber() const;

    std::string getDarkestSecret() const;

private:
    std::string firstName_;
    std::string lastName_;
    std::string nickname_;
    std::string phoneNumber_;
    std::string darkestSecret_;
};

# endif