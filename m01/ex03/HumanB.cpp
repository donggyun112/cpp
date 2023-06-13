#include "HumanB.hpp"

HumanB::HumanB(const std::string& HumanName)
    : name(HumanName), weapon(nullptr) {}

HumanB::~HumanB( void ) {

}

void	HumanB::attack() {
	if (weapon != nullptr) {
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	} else {
		std::cout << name << " has no weapons, can't attack" << std::endl;
	}
}

void	HumanB::setWeapon(Weapon & newWeapon)
{
	weapon = &newWeapon;
}