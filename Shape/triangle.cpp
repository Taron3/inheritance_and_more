
#include "triangle.hpp"

double Triangle::sideA() const {  return m_point.length(m_p3);  }
double Triangle::sideB() const {  return m_point.length(m_p2);  }
double Triangle::sideC() const {  return m_p2.length(m_p3);  }

double Triangle::perimeter() const 
{
	return sideA() + sideB() + sideC(); 
}

double Triangle::area() const
{
	return std::sqrt(perimeter() / 2 * 
			(perimeter() / 2 - sideA() ) * 
			(perimeter() / 2 - sideB() ) * 
			(perimeter() / 2 - sideC() ) ); 
}
