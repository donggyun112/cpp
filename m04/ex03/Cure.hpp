#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		void use(ICharacter &target);
		Cure* clone() const;
		Cure& operator=(const Cure& other);
};

#endif