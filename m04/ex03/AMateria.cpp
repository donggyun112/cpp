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

AMateria::AMateria(const AMateria& other) {
	*this = other;
	std::cout << "AMateria Copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other) {
	std::cout << "AMateria Copy assignment operator called" << std::endl;
	if (this != &other) {
		_type = other._type;
	}
	return (*this);
}

std::string const &AMateria::getType() const {
	return (_type);
}

void AMateria::use(ICharacter& target){
	std::cout << "AMateria "<< target.getName() << " USE" << std:: endl;
}