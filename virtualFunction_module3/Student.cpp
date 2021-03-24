#pragma once
#include <iostream>

#include "Student.h"


Student :: Student()
{

}
Student :: Student(const std::string &first_name, const std::string &last_name, const std::string &race)
	
{	

}
void Student::OutputAge()
{
	Person::OutputAge();
}

void Student::OutputIdentity()
{
	cout << "I am a Student" << endl;
}
