#include <iostream>
#include "Point.hpp"

int main() {
    Point a(0.0, 0.0);
    Point b(3.0, 0.0);
    Point c(0.0, 3.0);

    // Test Points inside the triangle
    Point point1(1.0, 1.0);
    Point point2(1.5, 1.5);
    Point point3(2.0, 2.0);

    // Test Points outside the triangle
    Point point4(-1.0, -1.0);
    Point point5(0.0, 4.0);
    Point point6(4.0, 0.0);

    // Test Points on the triangle edges
    Point point7(0.0, 0.0);
    Point point8(3.0, 0.0);
    Point point9(0.0, 3.0);

    // Test Point coinciding with one of the triangle vertices
    Point point10(0.0, 0.0);

    std::cout << "Point 1 inside the triangle: " << std::boolalpha << bsp(a, b, c, point1) << " (Expected: true)" << std::endl;
    std::cout << "Point 2 inside the triangle: " << std::boolalpha << bsp(a, b, c, point2) << " (Expected: true)" << std::endl;
    std::cout << "Point 3 inside the triangle: " << std::boolalpha << bsp(a, b, c, point3) << " (Expected: true)" << std::endl;
    std::cout << "Point 4 inside the triangle: " << std::boolalpha << bsp(a, b, c, point4) << " (Expected: false)" << std::endl;
    std::cout << "Point 5 inside the triangle: " << std::boolalpha << bsp(a, b, c, point5) << " (Expected: false)" << std::endl;
    std::cout << "Point 6 inside the triangle: " << std::boolalpha << bsp(a, b, c, point6) << " (Expected: false)" << std::endl;
    std::cout << "Point 7 inside the triangle: " << std::boolalpha << bsp(a, b, c, point7) << " (Expected: true)" << std::endl;
    std::cout << "Point 8 inside the triangle: " << std::boolalpha << bsp(a, b, c, point8) << " (Expected: true)" << std::endl;
    std::cout << "Point 9 inside the triangle: " << std::boolalpha << bsp(a, b, c, point9) << " (Expected: true)" << std::endl;
    std::cout << "Point 10 inside the triangle: " << std::boolalpha << bsp(a, b, c, point10) << " (Expected: true)" << std::endl;

    return 0;
}
