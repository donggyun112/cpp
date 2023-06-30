#include "Character.hpp"
#include "AMateria.hpp"

int main() {
	Character a("dongkseo");
	Character b;
	

	std::cout << "[equip Test]" << std::endl;
	a.equip(new Ice());
	a.equip(new Cure());
	a.equip(new Ice());
	a.equip(new Ice());

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "[Copy assigment Test]" << std::endl;
	b = a;
	b.unequip(0);
	b.unequip(2);
	a = b;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << b.getName();
	b.use(1, b);
	std::cout << std::endl;
	std::cout << std::endl;

	ICharacter *c = new Character(a);
	std::cout << c->getName();
	std::cout << std::endl;
	std::cout << std::endl;

}