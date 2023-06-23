#include "ClapTrap.hpp"

int main() {
	ClapTrap claptrap1("T1");
	ClapTrap claptrap2("JDG");

	claptrap1.attack("JDG");
	claptrap2.takeDamage(claptrap1.getAttackDamage());

	std::cout << "T1 Hitpoints" << claptrap1.getHitpoint() << std::endl;
	std::cout << "JDG Hitpoints" << claptrap2.getHitpoint() << std::endl;

	claptrap2.beRepaired(3);

	claptrap1.attack("JDG");
	claptrap2.takeDamage(100);

	return (0);
}