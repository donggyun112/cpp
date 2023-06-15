#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& other);
		~Fixed();
		
		int getRawBits() const;
		void setRawBits(int const raw);

		Fixed& operator=(const Fixed& other);
	private:
		int	_fixedPointValue;
		const static int _bits = 8;
};

# endif