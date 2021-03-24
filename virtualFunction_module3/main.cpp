//Virtual function allows polymorphism "overriden" function to works with pointer or reference.

#include <iostream>
#include <string>
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main()
{
	Student *Jackie = new Student("Tan", "yong hao", "chinese");
	Teacher *Eric = new Teacher("Ho", "wing heng", "chinese");
	Jackie->OutputAge();
	system("Pause");
}