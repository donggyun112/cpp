#ifndef POINT_HPP
# define POINT_HPP

class Point
{
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& other);
		Point operator=(const Point& other);
		float getX();
		float gety();
		~Point();
	private:
		float _x;
		float _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif