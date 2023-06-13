#ifndef	Weapon_HPP
# define Weapon_HPP

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string newType);
		~Weapon( void );
		const std::string& getType() const;
		void setType(std::string newType);
};


#endif