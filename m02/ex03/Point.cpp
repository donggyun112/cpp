#include "Point.hpp"

Point::Point() : _x(0), _y(0) {};

Point::Point(const float xValue, const float yValue) : _x(xValue), _y(yValue) {};

Point::Point(const Point& other) : _x(other._x), _y(other._y) {};

Point Point::operator=(const Point& otehr) {
	std::cout << "\033[1;31m[Warning] This is undefined behavior\033[0;39m" << std::endl;
	if (this != &otehr) {
		const Fixed *ptrX = &(_x);
		Fixed *nonConstPtrX = const_cast<Fixed *>(ptrX);
		*nonConstPtrX = otehr._x;

		const Fixed *ptrY = &(_y);
		Fixed *nonConstPtrY = const_cast<Fixed *>(ptrY);
		*nonConstPtrY = otehr._y;
	}
	return (*this);
}

Fixed Point::getX() const{
	return (_x);
}

Fixed Point::getY() const{
	return (_y);
}

Point::~Point() {};