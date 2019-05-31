
#include <iostream>
#include "circle.hpp"
#include "rectangle.hpp"
#include "triangle.hpp"

int main()
{
	
	Point p1(0, 0);
// /*
	Circle c1(p1, 5);
	std::cout << c1.perimeter() << std::endl ;
	std::cout << c1.area() << std::endl ;
	Point p2 = c1.getCenter();
	std::cout << p2.X() << "   " << p2.Y() << std::endl;
// */

	p2 = Point(0, 3);
// /*
	Rectangle rect(p1, p2);
	std::cout << rect.width() << std::endl;
	std::cout << rect.height() << std::endl;
	std::cout << rect.perimeter() << std::endl;
	std::cout << rect.area() << std::endl;
// */

	Point p3(3, 0);

	Triangle t1(p1, p2, p3);
	std::cout << t1.perimeter() << std::endl;
	std::cout << t1.area()      << std::endl;
	std::cout << t1.sideA()     << std::endl;

}
