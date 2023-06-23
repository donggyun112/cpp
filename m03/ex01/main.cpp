#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {

	std::cout << "=====================ClapTrap=====================" << std::endl << std::endl;
    ClapTrap clapTrap("Clappy");

    clapTrap.attack("Target");

    clapTrap.takeDamage(10);

    clapTrap.beRepaired(5);

    int clapTrapHitPoints = clapTrap.getHitpoint();
    int clapTrapAttackDamage = clapTrap.getAttackDamage();

	std::cout << "\n====================ScavTrap=====================" << std::endl << std::endl;

    ScavTrap scavTrap("Scavy");

    scavTrap.attack("Target");

    scavTrap.guardGate();

    int scavTrapHitPoints = scavTrap.getHitpoint();
    int scavTrapAttackDamage = scavTrap.getAttackDamage();
    int scavTrapEnergyPoints = scavTrap.getEnergyPoint();

    std::cout << "ClapTrap Hit Points: " << clapTrapHitPoints << std::endl;
    std::cout << "ClapTrap Attack Damage: " << clapTrapAttackDamage << std::endl;

    std::cout << "ScavTrap Hit Points: " << scavTrapHitPoints << std::endl;
    std::cout << "ScavTrap Attack Damage: " << scavTrapAttackDamage << std::endl;
    std::cout << "ScavTrap Energy Points: " << scavTrapEnergyPoints << std::endl;

    return 0;
}
