#ifndef	Weapon_HPP
# define Weapon_HPP

class Weapon
{
	private:
		std::string type;
	public:
		const std::string& getType() const;
		void setType(std::string& newType);
};


#endif