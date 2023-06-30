#include "AMateria.hpp"

AMateria::AMateria() 
	: _type("Defalut") {
	std::cout << "AMateria " << _type << " has been created!" << std::endl;
}

AMateria::AMateria(std::string const &type)
	: _type(type) {
	std::cout << "AMateria " << _type << " has been created!" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria Destructor called" << std::endl;
}

std::string const &AMateria::getType() const {
	return (_type);
}

void AMateria::use(ICharacter& target){
	std::cout << "AMateria "<< target.getName() << " USE" << std:: endl;
}