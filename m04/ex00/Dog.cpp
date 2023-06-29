#include "Dog.hpp"

Dog::Dog() 
	: Animal() {
	this->type = "Dog";
	std::cout << "Dog " << " has been created!" << std::endl;
}

Dog::Dog(const Dog& other) {
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "woof-woof!" << std::endl;
}

std::string Dog::getType() const {
	return (type);
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
}