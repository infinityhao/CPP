//union.cpp
//To store only one piece data at a time using union
//

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

union numericUnion
{
	int intValue;
	long longValue;
	double doubleValue;
};

void main()
{
	numericUnion myUnion;
	myUnion.intValue = 3;

	cout << myUnion.intValue << endl;

	myUnion.doubleValue = 4.5;
	cout << myUnion.doubleValue << endl;
	cout << myUnion.intValue << endl;
	getchar();
}