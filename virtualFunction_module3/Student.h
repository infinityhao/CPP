#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Student : public Person
{

public:
	Student();
	Student(const std::string &first_name, const std::string &last_name, const std::string &race);
	virtual void OutputIdentity();
	virtual void OutputAge();
	
};