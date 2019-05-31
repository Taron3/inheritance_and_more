
#include <string>

class Student 
{
public:
	Student()
	: m_age(17)
	, m_name("Name")
	, m_surname("Surname")
	, m_gender("female")
	, m_city("Yerevan")
	{}

	Student(const int age, const std::string &name, const std::string &surname, const std::string &gender, const std::string &city);
	Student(const Student &student);

	Student& operator=(const Student &student);

	friend std::ostream& operator<<(std::ostream &out, const Student &student) ;

private:
	int m_age;
	std::string m_name;
	std::string m_surname;
	std::string m_gender;
	std::string m_city;

};
