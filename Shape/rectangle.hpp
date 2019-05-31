
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP


#include "shape.hpp"

class Rectangle : public Shape
{
public:
	Rectangle(const Point &topLeft, const Point &bottomRight)
	: Shape(topLeft)
	, m_bottomRight(bottomRight)
	{}

	double width() const;
	double height() const;

	double perimeter() const;
	double area() const;

private:
	Point m_bottomRight; 
};


#endif // RECTANGLE_HPP
