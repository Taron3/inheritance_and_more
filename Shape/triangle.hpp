
#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "shape.hpp"

class Triangle : public Shape
{
public:
	Triangle(const Point &p1, const Point &p2, const Point &p3)
	: Shape(p1)
	, m_p2(p2)
	, m_p3(p3)
	{}
	
	double sideA() const; 
	double sideB() const;
	double sideC() const; 
	
	double perimeter() const;
	double area() const;

private:
	Point m_p2;
	Point m_p3;
};

#endif // TRIANGLE_HPP
