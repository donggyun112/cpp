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
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getHitpoint();
		int getEnergyPoint();
		int getAttackDamage();
		std::string getName();
		ClapTrap(const std::string newName);
		ClapTrap(const std::string newName, int Hp, int Ep, int Ad);
		ClapTrap(const ClapTrap& other);
		ClapTrap();
		virtual ~ClapTrap();
		ClapTrap& operator=(const ClapTrap& other);
};


#endif