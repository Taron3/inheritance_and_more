
#include <iostream>
#include "distance.hpp"

int main()
{
	Distance d1(25, 3, 32, 110);
	Distance d2(7, 8, 2, 200);
	Distance d3 = d1 + d2;
	std::cout << d1 << std::endl;
	std::cout << d2 << std::endl;
	std::cout << d3 << std::endl;
	
	Distance d4 = d1 / d2;
	std::cout << d1 << std::endl;
	std::cout << d2 << std::endl;
	std::cout << d4 << std::endl;
}
