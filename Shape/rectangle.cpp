
#include <cmath>
#include "rectangle.hpp"

double Rectangle::width() const
{
	return std::abs(std::abs(m_bottomRight.X()) - std::abs(m_point.X()) );
}

double Rectangle::height() const 
{
	return std::abs(std::abs(m_bottomRight.Y()) - std::abs(m_point.Y()) );
}

double Rectangle::perimeter() const 
{
	return 2 * (width() + height());
}

double Rectangle::area() const 
{
	return width() * height();
}
