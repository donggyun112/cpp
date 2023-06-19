#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
	public:

		Fixed();
		Fixed(const int newFixedPontValue);
		Fixed(const Fixed& other);
		Fixed(const float floatvalue);
		~Fixed();
	
		int 	getRawBits() const;
		void 	setRawBits(int const raw);
	
		float	toFloat() const;
		int 	toInt() const;

		Fixed& operator=(const Fixed& other);

		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;

		Fixed operator+(const Fixed& ohers) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);

	private:
		int	_fixedPointValue;
		const static int _bits = 8;
};

std::ostream & operator<<(std::ostream& out, const Fixed& other);

# endif