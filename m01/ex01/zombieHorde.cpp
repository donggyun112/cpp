#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	if (N < 0)
		return (NULL);
	Zombie* horder = new Zombie[N];

	for (int i = 0; i < N; i++)
		horder[i].setName(name);
	return (horder);
}