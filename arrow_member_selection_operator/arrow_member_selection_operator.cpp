//Two different ways to access class object
#include <iostream>
#include "Person.h"
using namespace std;

int main() {
	Person personObject; 
	Person* personPointer = &personObject;

	personObject.printSomething();  //Object use dot separator
	personPointer->printSomething(); //Pointer use arrow member selection operator
}