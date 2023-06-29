#include "Cat.hpp"

Cat::Cat() 
	: Animal() {
	this->type = "Cat";
	std::cout << "Cat " << " has been created!" << std::endl;
	brain = new Brain();
	brain->ideas[0] = "I was born!";
}

Cat::Cat(const Cat& other) {
	std::cout << "Cat Copy constructor called" << std::endl;
	Animal::operator=(other);
	brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow...(";
	for (int i = 0; i < 100; i++) {
		if (brain->ideas[i].empty())
			break ;
		std::cout << brain->ideas[i] << " and.. ";
	}
	std::cout << ")" << std::endl;
}

void Cat::thinking(const std::string& idea) {
	for (int i = 0; i < 100; i++) {
		if (brain->ideas[i].empty()) {
			brain->ideas[i] = idea;
			break ;
		}
	}
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat Destructor called" << std::endl;
}