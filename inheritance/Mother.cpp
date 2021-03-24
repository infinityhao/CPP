#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;



Mother::Mother()
{
	cout << "Default constructor from Mother class, FILO First in last out" << endl; 
}

void Mother::sayName()
{
	cout << "I am Vincent Tan" << endl;
}

Mother::~Mother()
{
	cout << "Deconstructor from Mother class, FILO First in last out" << endl;
}


