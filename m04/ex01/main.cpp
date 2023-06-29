#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void leaks()
{
	system("leaks test");
}

int main() {
	std::cout << "[Case1 Memory Test]" << std::endl;
    const Animal* animals[4];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    for (int i = 0; i < 4; i++) {
        delete animals[i];
    }
	std::cout << "==========================" << std::endl;
	std::cout << "[Case2 Copy Test]" << std::endl;
	Dog A;
	Dog B;
	A.thinking("!!!!!!!!!!");
	B = A;
	B.makeSound();
	atexit(leaks);
    return 0;
}
