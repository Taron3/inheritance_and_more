
#include <iostream>

#include "student.hpp"

int main()
{
	std::string name = "Name";
	std::string surname = "Surname";
	std::string gender = "gender";
	std::string city = "City";
	int age = 88;

	Student st1;
	std::cout << st1 << std::endl;

	Student st2(age, name, surname, gender, city); 
	std::cout << st2 << std::endl; 
	
	Student st3(st2);
	std::cout << st3;
}
