
#include <iostream>

#include "student.hpp"


Student::Student(const int age, const std::string &name, const std::string &surname, const std::string &gender, const std::string &city)
{
	m_age = age;
    m_name = name;
    m_surname = surname;
    m_gender = gender;
    m_city = city;
}

Student::Student(const Student &student)
{
	m_age = student.m_age;
	m_name = student.m_name;
    m_surname = student.m_surname;
    m_gender = student.m_gender;
    m_city = student.m_city;
}

Student& Student::operator=(const Student &student)
{	
	if(this == &student)
	{
		return *this;
	}

	m_age = student.m_age;
	m_name = student.m_name;
    m_surname = student.m_surname;
    m_gender = student.m_gender;
    m_city = student.m_city;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Student &student) 
{
	out << "Name:    " << student.m_name    << std::endl ;
	out << "Surname: " << student.m_surname << std::endl ;
	out << "Age:     " << student.m_age     << std::endl ;
	out << "Gender:  " << student.m_gender  << std::endl ;
	out << "City:    " << student.m_city    << std::endl ;
	return out;
}
