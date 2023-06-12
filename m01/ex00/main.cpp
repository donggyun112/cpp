#include "Zombie.hpp"

int main( void )
{
	Zombie	z1("Zombie1");
	z1.announce();

	Zombie	*z2 = new Zombie("Zombie2");
	z2->announce();

	randomChump("Zombie3");

	delete z2;
	return (0);
}