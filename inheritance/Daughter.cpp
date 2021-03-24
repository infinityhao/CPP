#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;



Daughter::Daughter()
{
	cout << "Default constructor of Daughter class, FIFO - Last in first out" << endl;
}

void Daughter::printV()
{
	//publicV = 1;
	cout << "publicV edited through Daughter class, the new value of publicV: " << publicV << endl;
	protectedV = 2;
	cout << "protectedV edited through Daughter class, the new value of protectedV: " << protectedV << endl;
	//privateV can't editable by inherited class
}

Daughter::~Daughter()
{
	cout << "Deconstructor of Daughter class, FIFO - Last in first out" << endl;
}




