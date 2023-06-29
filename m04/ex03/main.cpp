#include "Character.hpp"
#include "AMateria.hpp"

int main() {
	Character a("dongkseo");
	Character b;
	

	a.equip(new Ice());
	a.equip(new Cure());
	a.equip(new Ice());
	a.equip(new Ice());

	std::cout << std::endl;
	std::cout << std::endl;
	b = a;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << b.getName();
	b.use(1, b);
	std::cout << std::endl;

}