
#include <iostream>
#include <cmath>
#include "distance.hpp"

double Distance::length() const 
{
	double lengthX = std::abs(m_x2) - std::abs(m_x1);
 	double lengthY = std::abs(m_y2) - std::abs(m_y1);
 	return sqrt(std::abs(lengthX) * std::abs(lengthX) 
			  + std::abs(lengthY) * std::abs(lengthY) ); 
}

Distance operator+(const Distance &dist1, const Distance &dist2)
{
	return Distance(dist1.m_x1 + dist2.m_x1, dist1.m_y1 + dist2.m_y1, 
				    dist1.m_x2 + dist2.m_x2, dist1.m_y2 + dist2.m_y2 );
}


Distance operator/(const Distance &dist1, const Distance &dist2)
{
	return Distance(dist1.m_x1 / dist2.m_x1, dist1.m_y1 / dist2.m_y1, 
				    dist1.m_x2 / dist2.m_x2, dist1.m_y2 / dist2.m_y2 );
}


std::ostream& operator<<(std::ostream &out, const Distance &dist)
{
	out << "x1 = " << dist.m_x1 << std::endl;
	out << "y1 = " << dist.m_y1 << std::endl;
	out << "x2 = " << dist.m_x2 << std::endl;
	out << "y2 = " << dist.m_y2 << std::endl;
	out << "length = " << dist.length() << std::endl;
	return out;
}
