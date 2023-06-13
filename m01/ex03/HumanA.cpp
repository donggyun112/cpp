#include "HumanA.hpp"

HumanA::HumanA(const std::string & HumanName, Weapon & newWeapon) 
	: name(HumanName), weapon(&newWeapon) {}

void	HumanA::attack() {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanA::~HumanA( void ) {

}