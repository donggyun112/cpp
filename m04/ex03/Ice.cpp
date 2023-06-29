#include "Ice.hpp"

Ice::Ice() : AMateria("Ice") {
	std::cout << "Ice" << " has been created!" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice Destructor called" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other) {
	std::cout << "Ice Copy constructor called" << std::endl;
}

Ice *Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice& Ice::operator=(const Ice& other) {
	std::cout << "Ice Copy assignment operator called" << std::endl;
	if (this != &other) {
		AMateria::operator=(other);
	}
	return (*this);
}