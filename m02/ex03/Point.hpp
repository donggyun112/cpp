#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& other);
		Point operator=(const Point& other);
		Fixed getX() const;
		Fixed getY() const;
		~Point();
	private:
		float _x;
		float _y;
};

bool bsp(const Point a, const Point b, const Point c, const Point point);

#endif