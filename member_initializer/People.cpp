#include <iostream>
#include "People.h"
using namespace std;


People::People(string n, Birthday bo)
	:name(n), dateOfBirth(bo) //member initializer by using other classes member
{
}

void People::printInfo()
{
	cout << name << " was born on ";
	dateOfBirth.printDate();
}

People::~People()
{
}
