#include "Zombie.hpp"

int main ( void )
{
	int	numZombie = 5;
	Zombie* horder = zombieHorde(numZombie, "zombie1");
	if (!horder)
		return (1);

	for (int i = 0; i < numZombie; i++) {
		horder[i].announce();
	}

	delete [] horder;
	horder = NULL;
	return (0);
}