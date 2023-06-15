#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int newFixedPontValue) {
	std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = newFixedPontValue << _bits;
}

Fixed::Fixed(const Fixed& other) : _fixedPointValue(other._fixedPointValue) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const float floatvalue) {
	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(floatvalue * (1 << _bits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointValue);
}

void Fixed::setRawBits(int const raw) {
	_fixedPointValue = raw;
}

Fixed & Fixed::operator=(const Fixed & other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		_fixedPointValue = other._fixedPointValue;
	}
	return (*this);
}

float Fixed::toFloat() const {
	return (static_cast<float>(_fixedPointValue) / (1 << _bits));
}

int	Fixed::toInt() const {
	return (_fixedPointValue >> 8);
}

std::ostream& operator<<(std::ostream &out, const Fixed& other) {
	out << other.toFloat();
	return (out);
}