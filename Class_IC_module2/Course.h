#pragma once
#include <iostream>
#include <string>
using namespace std;

class Course: public Student
{
	string student[3];
	string teacher[1];
private:
public:
	Course();
	~Course();
};
Course::Course()
{

}
Course::~Course()
{

}