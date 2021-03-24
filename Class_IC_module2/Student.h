#pragma once
using namespace std;
class Student
{
private:
	string StudentFName, StudentLName, StudentAge, StudentAddrs, StudentCity, StudentPhone;
public:
	Student(string SFName, string SLName, string SAge, string SAddrs, string SCity, string SPhone);
	Student() { };
	~Student();
	void SitInClass();
};
Student::Student(string SFName, string SLName, string SAge, string SAddrs, string SCity, string SPhone)
{
	StudentFName = SFName;
	StudentLName = SLName;
	StudentAge = SAge;
	StudentAddrs = SAddrs;
	StudentCity = SCity;
	StudentPhone = SPhone;
}
Student::~Student()
{

}
void Student::SitInClass()
{
	cout << "Sitting in main theater";
}