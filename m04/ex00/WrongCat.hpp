#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();

		WrongCat(const WrongCat& other);
		WrongCat& operator=(const WrongCat& other);

		std::string getType() const;
		void makeSound() const;
};

#endif