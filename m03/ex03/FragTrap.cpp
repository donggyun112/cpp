#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) 
	: ClapTrap(name) {
	FragTrap::_hitPoint = 100;
	FragTrap::_energyPoints = 100;
	FragTrap::_attackDamage = 30;
	std::cout << "FragTrap " << _name << " has bennd created!" << std::endl;
}

FragTrap::FragTrap() 
	: ClapTrap("defalut") {
	FragTrap::_hitPoint = 100;
	FragTrap::_energyPoints = 100;
	FragTrap::_attackDamage = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) {
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		 _name = other._name;
		_hitPoint = other._hitPoint;
		_attackDamage = other._attackDamage;
		_energyPoints = other._energyPoints;
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << _name <<" FragTrap Destroy Constructor called" << std::endl;
}

void
FragTrap::highFivesGuys(void) {
	std::cout << "Positive high fives request!" << std::endl;
}