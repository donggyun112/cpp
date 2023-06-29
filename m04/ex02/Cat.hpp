#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
	private:
		Brain* brain;
	public:
		Cat();
		virtual ~Cat();

		Cat(const Cat& other);
		Cat& operator=(const Cat& other);

		virtual void makeSound() const;

		void thinking(const std::string& idea);
};

#endif