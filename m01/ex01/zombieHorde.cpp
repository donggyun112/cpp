#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie* horder = new Zombie[N];

	for (int i = 0; i < N; i++)
		horder[i].setName(name);
	return (horder);
}