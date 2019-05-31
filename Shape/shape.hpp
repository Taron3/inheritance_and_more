
#ifndef SHAPE_HPP
#define SHAPE_HPP

#include "point.hpp"

class Shape
{
public:
	Shape(const Point &p)
	: m_point(p)
	{}

	double perimeter() const {};
	double area() const {} ;

protected:
	Point m_point;
};

#endif // SHAPE_HPP
