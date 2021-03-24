// Demo to look into dynamic memory allocation
#include <iostream>
using namespace std;

int main()
{
	// declare a pointer to int and allocate space for it
	// with the keyword new
	int *pInt = new int;

	// declare a pointer to double and allocate space for it
	// with the keyword new
	double *pDouble = new double;

	// store the values in the memory locations
	*pInt = 3;
	*pDouble = 5.0;

	// output the values and memory addresses
	cout << "Value stored at *pInt = " << *pInt << ": memory address = " << pInt << endl;
	cout << "Value stored at *pDouble = " << *pDouble << ": memory address = " << pDouble << endl;
	
	cout << "Size of pInt = " << sizeof(pInt);
	cout << " Size of *pInt = " << sizeof(*pInt) << endl;

	cout << "Size of pDouble = " << sizeof(pDouble);
	cout << " Size of *pDouble = " << sizeof(*pDouble) << endl;
	system("pause");

	delete pInt;
	delete pDouble;
	return 0;
}
