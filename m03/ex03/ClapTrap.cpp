#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string newName) 
	: _name(newName), _hitPoint(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap() 
	: _name("default"), _hitPoint(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const std::string newName, int Hp, int Ep, int Ad)
	: _name(newName), _hitPoint(Hp), _energyPoints(Ep), _attackDamage(Ad) {
		std::cout << "ClapTrap " << _name << "qwe has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;
}

ClapTrap& 
ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		_name = other._name;
		_hitPoint = other._hitPoint;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << _name <<" ClapTrap Destroy Constructor called" << std::endl;
}

void 
ClapTrap::attack(const std::string& target) {
	if (_hitPoint <= 0 || _energyPoints <= 0) {
		std::cout << "ClapTrap " << _name << " can't attack. It has no hit points or energy points left." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints -= 1;
}

void 
ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoint <= 0) {
		std::cout << "ClapTrap " << _name << " already died" << std::endl;
		return ;
	}

	_hitPoint -= amount;
	std::cout << "ClapTrap" << _name << " " <<  amount << " points of damage!" << std::endl;
	if (_hitPoint <= 0) {
		std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
    }
}

void 
ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoint <= 0) {
        std::cout << "ClapTrap " << _name << " can't be repaired. It has been destroyed." << std::endl;
        return;
    }

    if (_energyPoints <= 0) {
        std::cout << "ClapTrap " << _name << " can't be repaired. It has no energy points left." << std::endl;
        return;
    }

    _hitPoint += amount;
    std::cout << "ClapTrap " << _name << " has been repaired. It recovers " << amount << " hit points!" << std::endl;
    _energyPoints -= 1;
}

int 
ClapTrap::getHitpoint() {
	return (_hitPoint);
}

int 
ClapTrap::getAttackDamage() {
	return (_attackDamage);
}

int 
ClapTrap::getEnergyPoint() {
	return (_energyPoints);
}

std::string
ClapTrap::getName() {
	return (_name);
}