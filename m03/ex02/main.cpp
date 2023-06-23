#include "FragTrap.hpp"

int	main(void){
	FragTrap A;
	FragTrap B("T1");

	A.attack("T1");
	A.beRepaired(100);
	A.beRepaired(10);
	A.highFivesGuys();
	A.takeDamage(200);
	A.highFivesGuys();
	B.attack("A");
	B.beRepaired(10);
	B.takeDamage(19);
	B.highFivesGuys();
	B.beRepaired(39);
	B.highFivesGuys();
	B.beRepaired(49);
	B.beRepaired(49);
	B.highFivesGuys();
}