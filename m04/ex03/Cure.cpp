#include "Cure.hpp"

Cure::Cure() : AMateria("Cure") {
	std::cout << "Cure" << " has been created!" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure Destructor called" << std::endl;
}

Cure *Cure::clone() const {
	return (new Cure(*this));
}

Cure& Cure::operator=(const Cure& other) {
	std::cout << "cure Copy assignment operator called" << std::endl;
	if (this != &other) {
		AMateria::operator=(other);
	}
	return (*this);
}

void Cure::use(ICharacter &target) {
	std::cout << "* shoots an cure bolt at " << target.getName() << " *" << std::endl;
}
