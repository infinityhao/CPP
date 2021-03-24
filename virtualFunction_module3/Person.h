#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
	
public:
	string first_name, last_name, race;
	Person();
	Person(string first_name, string last_name, string race);
	virtual void OutputIdentity() = 0;
	virtual void OutputAge();
	virtual ~Person();
protected:
	string phone;
private:
	int age;
};