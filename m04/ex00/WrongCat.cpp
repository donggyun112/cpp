#include "WrongCat.hpp"

WrongCat::WrongCat() 
	: WrongAnimal() {
	this->type = "WrongCat";
	std::cout << "WrongCat " << " has been created!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) {
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "Meow..." << std::endl;
}

std::string WrongCat::getType() const {
	return (type);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called" << std::endl;
}