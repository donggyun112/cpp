#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(const std::string& name);
		ScavTrap(const ClapTrap& other);
		ScavTrap();
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap& other);
		void guardGate();
		void attack(const std::string& target);
};

#endif
