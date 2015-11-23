// Example1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <memory>
#include <iostream>
#include <cstdlib>
#include "Person.h"

using namespace std;

void printPerson1(Person p) //By value (copies entire object)
{

}

void printPerson2(Person *p) //By Pointer
{

}

void printPerson3(shared_ptr<Person> p) //Only works for shared_ptr
{

}

void printPerson(Person &p) //By reference
{
	cout << p.getName() << ", " << p.getAge() << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	Person lili("Lili Barbour", 29);
	Person *tyler = new Person("Tyler Retzlaff", 16);
	shared_ptr<Person> jon = make_shared<Person>("Jon Mash", 29);

	cout << "Hello World" << endl;
	printPerson(lili);
	printPerson(*tyler);
	printPerson(*jon);
	delete tyler;
	cin.get();
	return EXIT_SUCCESS;
}

