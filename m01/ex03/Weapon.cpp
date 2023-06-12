#include "Weapon.hpp"

const std::string & getType() const {
	return (type);
}

void	Weapon::setType(std::string& newType) {
	type = newType;
}