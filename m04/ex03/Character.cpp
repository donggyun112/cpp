#include "Character.hpp"

Character::Character() : name("Defalut") {
	std::cout << "Charcter " << name << " has been created!" << std::endl;
	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
	}
}

Character::Character(const std::string& newName) : name(newName) {
	std::cout << "Charcter " << name << " has been created!" << std::endl;
	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
	}
}

std::string const& Character::getName() const {
	return (name);
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (inventory[i] == NULL) {
			inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= 4)
		return ;
	std::cout << name << " unequip " << inventory[idx]->getType() << std::endl;
	delete inventory[idx];
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx >= 4 || inventory[idx] == NULL)
		return ;
	inventory[idx]->use(target);
	delete inventory[idx];
	inventory[idx] = NULL;
}

Character& Character::operator=(const Character& other) {
	std::cout << "Character Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		for (int i = 0; i < 4; i++) {

			delete inventory[i];
			if (other.inventory[i] == NULL) {
				inventory[i] = NULL;
			} else {
				inventory[i] = other.inventory[i]->clone();
			}
		}
	}
	return (*this);
}

Character::Character(const Character& other) {
	std::cout << "Character Copy constructor called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		for (int i = 0; i < 4; i++) {

			if (other.inventory[i] == NULL) {
				inventory[i] = NULL;
			}
			else {
				inventory[i] = other.inventory[i]->clone();
			}
		}
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		delete inventory[i];
	}
	std::cout << "Character Destructor called" << std::endl;
}