#include "contact.hpp"

void Contact::setFirstName(const std::string& firstName) {
    firstName_ = firstName;
}

void Contact::setLastName(const std::string& lastName) {
	lastName_ = lastName;
}

void Contact::setNickname(const std::string& nickname) {
	nickname_ = nickname;
}

void Contact::setPhoneNumber(const std::string& phoneNumber) {
	phoneNumber_ = phoneNumber;
}

void Contact::setDarkestSecret(const std::string& darkestSecret) {
	darkestSecret_ = darkestSecret;
}

std::string Contact::getFirstName() const {
	return firstName_;
}

std::string Contact::getLastName() const {
	return lastName_;
}

std::string Contact::getNickname() const {
	return nickname_;
}

std::string Contact::getPhoneNumber() const {
	return phoneNumber_;
}

std::string Contact::getDarkestSecret() const {
	return darkestSecret_;
}