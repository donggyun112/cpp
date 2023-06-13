#include "open.hpp"

int main(int ac, char **av)
{
	if (ac == 4)
	{
		open readFile;
		if (readFile.openCheak(av[1]) == 1 || readFile.setS1(av[2]) == false || readFile.setS2(av[3]) == false)
			return (1);
		
		
	}
	else
		std::cout << "bad arguments" << std::endl;
	return (1);
}