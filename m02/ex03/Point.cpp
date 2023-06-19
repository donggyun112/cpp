#include "Point.hpp"

Point::Point() : _x(0), _y(0) {};

Point::Point(const float xValue, const float yValue) : _x(xValue), _y(yValue) {};

Point::Point(const Point& other) : _x(other._x), _y(other._y) {};

Point Point::operator=(const Point& otehr) {
	if (this != &otehr) {
		_x = otehr._x;
		_y = otehr._y;
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