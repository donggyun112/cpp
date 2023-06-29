#ifndef Dog_HPP
# define Dog_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		virtual ~Dog();

		Dog(const Dog& other);
		Dog& operator=(const Dog& other);

		virtual void makeSound() const;
		void thinking(const std::string& idea);
};

#endif