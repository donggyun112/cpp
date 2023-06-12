#include "Zombie.hpp"

void	Zombie::announce( void ) {
	std::cout << this->name << ":BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(const std::string & newName) {
	this->name = newName;
	std::cout << name << " Zombie Create" << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << this->name << " died" << std::endl;
}