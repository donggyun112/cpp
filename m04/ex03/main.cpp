#include "Character.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"

void leaks() {
	system("leaks test");
}

int main() {
	Character *a = new Character("dongkseo");
	Character *b;
	

	std::cout << "[equip Test]" << std::endl;
	a->equip(new Ice());
	a->equip(new Cure());
	a->equip(new Ice());
	a->equip(new Ice());

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "[Copy assigment Test]" << std::endl;
	b = a;
	b->unequip(0);
	b->unequip(2);
	a = b;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << b->getName();
	b->use(1, *b);
	delete a;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "[IMateriaSource Test Make MateriaSource]" << std::endl;

	MateriaSource learn;
	Ice type;
	Cure type2;
	Character type3;

	learn.learnMateria(&type);
	learn.learnMateria(&type2);

	AMateria *tmp = learn.createMateria("Ice");
	std::cout << tmp->getType() << std::endl;
	std::cout << tmp->getType() << std::endl;
	std::cout << tmp->getType() << std::endl;
	tmp->use(type3);

	delete tmp;
	atexit(leaks);
	return (0);
}