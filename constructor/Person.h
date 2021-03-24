#pragma once

#include <string>
using namespace std;

class Person
{
private:
	string FirstName, LastName;
	int age;

public:
	Person();
	Person(string fname, string lname);
	Person(string fname, string lname, int age);
	~Person();
	void SayHello();
	void SetFirstName(string fname);
	string GetFirstName();
	void SetLastName(string lname);
	string GetLastName();
	void SetAge(int age);
	int GetAge();
};