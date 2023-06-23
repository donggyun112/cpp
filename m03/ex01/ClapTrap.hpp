#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int _hitPoint;
		int _energyPoints;
		int _attackDamage;
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getHitpoint();
		int getEnergyPoint();
		int getAttackDamage();
		ClapTrap(const std::string newName);
		ClapTrap(ClapTrap& other);
		ClapTrap();
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap& other);
};


#endif