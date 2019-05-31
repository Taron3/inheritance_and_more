
#ifndef DISTANCE_HPP
#define DISTANCE_HPP

#include "iostream"

class Distance
{
public:
	Distance(const double x1 = 0, const double y1 = 0, const double x2 = 0, const double y2 = 0)
	: m_x1(x1)
	, m_y1(y1)
	, m_x2(x2)
	, m_y2(y2)
	{}

	double length() const;

	friend Distance operator+(const Distance &dist1, const Distance &dist2);
	friend Distance operator/(const Distance &dist1, const Distance &dist2);
	friend std::ostream& operator<<(std::ostream &out, const Distance &dist);

private:
	double m_x1;
	double m_y1;
	double m_x2;
	double m_y2;
};

#endif // DISTANCE_HPP
