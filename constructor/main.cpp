//Constructor allows us to create infinity Person objects.
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main()
{
	// create a Person instance using default constructor
	Person *pOne = new Person;
	Person *pTwo = new Person("Jackie", "Tan");
	Person *pThree = new Person("Shayne", "Tan", 6);

	
	pOne->SayHello();
	pTwo->SayHello();
	pThree->SayHello();
	
	delete pOne; // When delete is called on an object, that object's destructor is called
	pTwo->~Person();
	pThree->~Person();

	Person p; // Instantiate new object called p
	Person &pRef = p;
	p.SayHello(); // Since is object and not pointer then we can use dot operator
	pRef.SayHello();
	system("Pause");

	return 0;
}