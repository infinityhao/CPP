#pragma once
#include "Person.h"


Person :: Person()
	: first_name("Unknown first name"), last_name("Unknown last name")
{
}
Person::Person(string first_name, string last_name, string race)
	: first_name(first_name), last_name(last_name), race(race) //only within class can edit variables
{

}
void Person :: OutputAge()

{
	cout << "I am " << age << " years old" << endl;
}
Person::~Person()

{
	cout << "Good Bye from Person destructor" << endl;
}
