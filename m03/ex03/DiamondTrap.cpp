#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
	: ClapTrap("defalut_clap_name"), _name("defalut") {
	_energyPoints = 50;
	_hitPoint = 100;
	_attackDamage = 30;
	std::cout << "DiamondTrap Defalut constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name) {
	std::cout << "DiamondTrap " << _name << " copy constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& Name) : ClapTrap(Name + "_lacp_name"), _name(Name) {
	_energyPoints = 50;
	_hitPoint = 100;
	_attackDamage = 30;
	std::cout << "DiamondTrap " << Name << " constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	if (this != &other) {
		_hitPoint = other._hitPoint;
		_energyPoints = other._energyPoints;
		_name = other._name;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << _name << " DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "My name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::display_status() {
	std::cout << "Hits point : " << _hitPoint << std::endl;
	std::cout << "EnergyPoint : " << _energyPoints << std::endl;
	std::cout << "AttackDamage : " << _attackDamage << std::endl;
}