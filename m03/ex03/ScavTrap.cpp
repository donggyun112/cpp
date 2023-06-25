#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) 
	: ClapTrap(name) {
	_hitPoint = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap() 
	: ClapTrap("defalut") {
	_hitPoint = 100;
	_energyPoints = 50;
	_attackDamage = 20;	
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ClapTrap& other) {
	*this = other;
}

ScavTrap::~ScavTrap() {
	std::cout << _name <<" ScavTrap Destroy Constructor called" << std::endl;
}

ScavTrap& 
ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
		_attackDamage = other._attackDamage;
		_hitPoint = other._hitPoint;
		_energyPoints = other._energyPoints;
		_name = other._name;
	}
	return (*this);
}

void
ScavTrap::guardGate() {
	if (_hitPoint <= 0) {
		std::cout << "ScavTrap " << _name << "can't be guardGate. It has been destroyed." << std::endl;
		return ;
	}

	if (_energyPoints <= 0) {
		std::cout << "ScavTrap " << _name << " can't be guardGate. It has no energy points left." << std::endl;
	}

	std::cout << "ScavTrap " << _name << " has succeeded in the guard." << std::endl;
	_energyPoints -= 1;
}

void
ScavTrap::attack(const std::string& target) {
	if (_hitPoint <= 0 || _energyPoints <= 0) {
		std::cout << "ScavTrap " << _name << " can't attack. It has no hit points or energy points left." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints -= 1;
}