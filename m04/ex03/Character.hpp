#ifndef CHARACTER
# define CHARACTER

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character : public ICharacter
{
	private:
		AMateria* inventory[4];
		std::string name;
	public:
		Character();
		Character(const Character& other);
		Character(const std::string& newName);
		~Character();

		Character& operator=(const Character& other);
		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);

};

#endif