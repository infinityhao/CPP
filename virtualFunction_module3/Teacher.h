#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Teacher : public Person
{
public:
	Teacher();
	Teacher(const std::string &first_name, const std::string &last_name, const std::string &race);
	virtual void OutputIdentity();
};
