#pragma once
#include <iostream>
#include <string>
using namespace std;

class Teacher
{

private:
	string TeacherFName, TeacherLName, TeacherAge, TeacherAddrs, TeacherCity, TeacherPhone;
public:
	Teacher();
	~Teacher();
	void GradeStudent();
	void SitInClass();
};
Teacher::Teacher()
{

}
Teacher::~Teacher()
{

}
void Teacher::GradeStudent()
{
	cout << "Student Graded" << endl;
}
void Teacher::SitInClass()
{
	cout << "Sitting at front of class" << endl;
}