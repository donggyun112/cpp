#include <iostream>
#include <string>
#include "command_accse.hpp"

class Contact {
public:
    Contact() {}

	void setFirstName(const std::string& firstName) {
        firstName_ = firstName;
    }

	void setLastName(const std::string& lastName) {
		lastName_ = lastName;
	}

	void setNickname(const std::string& nickname) {
		nickname_ = nickname;
	}

	void setPhoneNumber(const std::string& phoneNumber) {
		phoneNumber_ = phoneNumber;
    }

    void setDarkestSecret(const std::string& darkestSecret) {
		darkestSecret_ = darkestSecret;
    }

    std::string getFirstName() const {
		return firstName_;
    }

    std::string getLastName() const {
		return lastName_;
    }

    std::string getNickname() const {
		return nickname_;
    }

    std::string getPhoneNumber() const {
		return phoneNumber_;
    }

    std::string getDarkestSecret() const {
		return darkestSecret_;
    }

private:
    std::string firstName_;
    std::string lastName_;
    std::string nickname_;
    std::string phoneNumber_;
    std::string darkestSecret_;
};
