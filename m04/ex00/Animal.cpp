#include "Animal.hpp"

Animal::Animal() 
	: type("Default") {
		std::cout << "Animal " << type << " has been created!" << std::endl;
};

Animal::Animal(const Animal& other) {
	*this = other;
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return (*this);
}

void Animal::makeSound() const {
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const {
	return (type);
}

Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}