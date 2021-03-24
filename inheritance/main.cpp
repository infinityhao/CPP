//Inherited class details from public, protection, constructor, deconstructor
//Inherit doesn't inherit parent class constructor or deconstructor
#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

int main() {
	Mother mom; //whenever object created, default constructor run once FILO
	mom.sayName();

	Daughter shayne; //Inherited class can use mother class members 
	shayne.sayName(); //derived class object call will call base class constructor 1st then only the daughter class FIFO
					  //deconstructor FIFO
	Daughter editV;
	editV.publicV = 1;
	editV.printV();
		
}