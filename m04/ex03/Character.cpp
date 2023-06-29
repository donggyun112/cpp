#include "Character.hpp"

Character::Character() : name("Defalut") {
	std::cout << "Charcter" << name << " has been created!" << std::endl;
	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
	}
}

Character::Character(const std::string& newName) : name(newName) {
	std::cout << "Charcter" << name << " has been created!" << std::endl;
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
	delete inventory[idx];
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx >= 4)
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

				continue;
			}
			if (other.inventory[i]->getType() == "Ice") {

				inventory[i] = new Ice();
			} 
			else if (other.inventory[i]->getType() == "Cure") {

				inventory[i] = new Cure();
			} 
			else if (other.inventory[i] != NULL) {

				inventory[i] = other.inventory[i];
			} 
			else {

				inventory[i] = NULL;
			}
		}
	}
	return (*this);
}

Character::Character(const Character& other) {
	std::cout << "Character Copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (other.inventory[i]->getType() == "Ice") {
			delete inventory[i];
			inventory[i] = new Ice();
		}
		else if (other.inventory[i]->getType() == "Cure") {
			delete inventory[i];
			inventory[i] = new Cure();
		} else if (other.inventory[i] != NULL) {
			delete inventory[i];
			inventory[i] = other.inventory[i];
		} else {
			inventory[i] = NULL;
		}
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		delete inventory[i];
	}
	std::cout << "Character Destructor called" << std::endl;
}