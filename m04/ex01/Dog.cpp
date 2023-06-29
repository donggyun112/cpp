#include "Dog.hpp"

Dog::Dog() 
	: Animal() {
	this->type = "Dog";
	std::cout << "Dog " << " has been created!" << std::endl;
	brain = new Brain();
	brain->ideas[0] = "I was born";
}

Dog::Dog(const Dog& other) {
	std::cout << "Dog Copy constructor called" << std::endl;
	Animal::operator=(other);
	brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

void Dog::thinking(const std::string& idea) {
	for (int i = 0; i < 100; i++) {
		if (brain->ideas[i].empty()) {
			brain->ideas[i] = idea;
			break ;
		}
	}
}

void Dog::makeSound() const {
	std::cout << "woof-woof!(";
	for (int i = 0; i < 100; i++) {
		if (brain->ideas[i].empty())
			break ;
		std::cout << brain->ideas[i] << " and ";
	}
	std::cout << ")" << std::endl;
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog Destructor called" << std::endl;
}