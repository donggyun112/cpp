#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << "[No Memory allocate]" << std::endl;
	WrongAnimal A;
	WrongCat	B;
	std::cout << B.getType() << std::endl;
	A.makeSound();
	B.makeSound();

	Animal	a;
	Cat		b;
	std::cout << b.getType() << std::endl;
	a.makeSound();
	b.makeSound();
	std::cout << "==========================" << std::endl << std::endl;

	std::cout << "[Wrong Case]" << std::endl;
	WrongCat *ptr = new WrongCat();
	const WrongAnimal* test = ptr;
	std::cout << test->getType() << std::endl;
	test->makeSound();
	delete test;
	//delete ptr;
	std::cout << "==========================" << std::endl << std::endl;

	std::cout << "[Casting Test]" << std::endl;
	Cat* Cat_ptr = new Cat();
	dynamic_cast<Animal *>(Cat_ptr)->makeSound();
	delete Cat_ptr;
	std::cout << "==========================" << std::endl << std::endl;
	std::cout << "[Casting Test2]" << std::endl;
	WrongCat* wrong_cat_ptr = new WrongCat();
	dynamic_cast<WrongAnimal *>(wrong_cat_ptr)->makeSound();
	delete wrong_cat_ptr;
	std::cout << "==========================" << std::endl << std::endl;

	std::cout << "[Basic Test]" << std::endl;
	const Animal* meta = new Animal(); 
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound! 
	j->makeSound();
    meta->makeSound();

	delete meta;
	delete i;
	delete j;

	return 0;
}