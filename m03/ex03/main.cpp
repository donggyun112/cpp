#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main() {

	DiamondTrap E("E");

	E.display_status();
	E.attack("Target");
	E.takeDamage(20);
	E.whoAmI();
}
