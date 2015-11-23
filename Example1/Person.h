#include <string>

class Person
{
public:
	Person(std::string name, unsigned int age);
	unsigned int getAge() const;
	std::string getName() const;

private:
	unsigned int m_age;
	std::string m_name;
};