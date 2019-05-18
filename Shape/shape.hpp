
#ifndef SHAPE_HPP
#define SHAPE_HPP

#include "point.hpp"

class Shape
{
public:
	Shape(const Point &p)
	: m_point(p)
	{}

	const Point& getPoint() const { return m_point; }
	double perimeter() const {};
	double area() const {} ;

private:
	Point m_point;
};

#endif // SHAPE_HPP
