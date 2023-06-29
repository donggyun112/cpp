#include "Cat.hpp"

Cat::Cat() 
	: Animal() {
	this->type = "Cat";
	std::cout << "Cat " << " has been created!" << std::endl;
}

Cat::Cat(const Cat& other) {
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow..." << std::endl;
}

std::string Cat::getType() const {
	return (type);
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
}