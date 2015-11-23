#include "stdafx.h"
#include "Person.h"

using namespace std;
Person::Person(string name, unsigned int age) : m_name(name), m_age(age)
{
	//Empty	
}

unsigned int
Person::getAge() const
{
	return this->m_age;
}

string
Person::getName() const
{
	return this->m_name;
}