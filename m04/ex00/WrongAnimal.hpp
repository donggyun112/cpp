#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		void makeSound() const;
		std::string getType() const;
		~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& other);
};

#endif