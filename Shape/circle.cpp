
#include "circle.hpp"

const double PI = 3.14159265359;

const Point& Circle::getCenter() const
{
	return getPoint(); 
}

double Circle::perimeter() const
{
	return 2 * PI * m_radius;
}

double Circle::area() const 
{
	return PI * m_radius * m_radius;
}
