#include "Point.hpp"

int getSign(Point a, Point b, Point c) {
    float x1 = a.getX().toFloat() - b.getX().toFloat();
    float y1 = a.getY().toFloat() - b.getY().toFloat();
    float x2 = a.getX().toFloat() - c.getX().toFloat();
    float y2 = a.getY().toFloat() - c.getY().toFloat();
    return static_cast<int>((x1 * y2) - (y1 * x2));
}

bool bsp(const Point a, const Point b, const Point c, const Point point) {
    int d1 = getSign(a, b, point);
    int d2 = getSign(b, c, point);
    int d3 = getSign(c, a, point);

    return (d1 > 0 && d2 > 0 && d3 > 0) || (d1 < 0 && d2 < 0 && d3 < 0);
}