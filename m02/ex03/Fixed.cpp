#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _fixedPointValue(0) {}

Fixed::Fixed(const int newFixedPontValue) : _fixedPointValue(newFixedPontValue << _bits) {}

Fixed::Fixed(const Fixed& other) : _fixedPointValue(other._fixedPointValue) {}

Fixed::Fixed(const float floatvalue) : _fixedPointValue(roundf(floatvalue * (1 << _bits))) {}

Fixed::~Fixed() {}

int Fixed::getRawBits() const {
	return (_fixedPointValue);
}

void Fixed::setRawBits(int const raw) {
	_fixedPointValue = raw;
}

Fixed & Fixed::operator=(const Fixed & other) {
	if (this != &other) {
		_fixedPointValue = other._fixedPointValue;
	}
	return (*this);
}

float Fixed::toFloat() const {
	return (static_cast<float>(_fixedPointValue) / (1 << _bits));
}

int	Fixed::toInt() const {
	return (_fixedPointValue >> _bits);
}

bool Fixed::operator>(const Fixed& other) const {
	return (_fixedPointValue > other._fixedPointValue);
}

bool Fixed::operator<(const Fixed& other) const {
	return (_fixedPointValue < other._fixedPointValue);
}

bool Fixed::operator<=(const Fixed& other) const {
	return (_fixedPointValue <= other._fixedPointValue);
}

bool Fixed::operator>=(const Fixed& other) const {
	return (_fixedPointValue >= other._fixedPointValue);
}

bool Fixed::operator==(const Fixed& other) const {
	return (_fixedPointValue == other._fixedPointValue);
}

bool Fixed::operator!=(const Fixed& other) const {
	return (_fixedPointValue != other._fixedPointValue);
}

Fixed Fixed::operator+(const Fixed& other) const {
	Fixed ret(this->toFloat() + other.toFloat());
	return (ret);
}

Fixed Fixed::operator-(const Fixed& other) const {
	Fixed ret(this->toFloat() - other.toFloat());
	return (ret);
}

Fixed Fixed::operator*(const Fixed& other) const {
	Fixed ret(this->toFloat() * other.toFloat());
	return (ret);
}

Fixed Fixed::operator/(const Fixed& other) const {
	Fixed ret(this->toFloat() / other.toFloat());
	return (ret);
}


Fixed& Fixed::operator++() {
	this->_fixedPointValue++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed	tmp(*this);
	++(*this);
	return (tmp);
}

Fixed& Fixed::operator--() {
	this->_fixedPointValue--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed	tmp(*this);
	--(*this);
	return (tmp);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return ((a < b) ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return ((a > b) ? a : b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return ((a < b) ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return ((a > b) ? a : b);
}

std::ostream& operator<<(std::ostream &out, const Fixed& other) {
	out << other.toFloat();
	return (out);
}