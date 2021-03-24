#include <iostream>
#include "Person.h"
using namespace std;

Person::Person() //It will auto-executed once object was created. 
{
	//To initialized our private member variables
	FirstName = "";
	LastName = "";
	age = 0;
}

Person::Person(string fname, string lname) : FirstName(fname), LastName(lname) //another way to implement 
{
	
}

Person::Person(string fname, string lname, int age)
{
	this->FirstName = fname;
	this->LastName = lname;
	this->age = age;
}

Person::~Person()
{
}

void Person::SayHello()
{
	cout << "Your name is " + LastName + " " + FirstName << endl;
}

void Person::SetFirstName(string fname)
{
	this->LastName = fname;
}

string Person::GetFirstName()
{
	return this->FirstName;
}

void Person::SetLastName(string lname)
{
	this->FirstName = lname;
}

string Person::GetLastName()
{
	return this->LastName;
}

void Person::SetAge(int age)
{
	this->age = age;
}

int Person::GetAge()
{
	return this->age;
}
