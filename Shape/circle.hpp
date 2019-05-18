
#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "shape.hpp"

class Circle : public Shape
{
public:
	Circle(const Point &center, const double radius)
	: Shape(center)
	, m_radius(radius)
	{}

	const Point& getCenter() const;
	double perimeter() const ;
	double area() const ;

private:
	double m_radius;
};

#endif // CIRCLE_HPP
