#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() 
	: type("Default") {
		std::cout << "WrongAnimal " << type << " has been created!" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	*this = other;
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return (*this);
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const {
	return (type);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}