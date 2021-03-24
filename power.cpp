//power.cpp
//for loop should use two variables, one for the base and one for the exponent. 
//It should then calculate the base raised to the exponent. 
//2 raised to the power of 2 should output 4, 2 raised to 8 should output 256

#include <iostream>
#include <cstdio>
using namespace std;

void CalculateExponent(void)
{
	int exponent;
	float base, result = 1;

	cout << "Please input the base number:" << endl;
	cin >> base;
	cout << "Please input the exponent number:" << endl;
	cin >> exponent;

	if (exponent < 1) //If exponent value < 1, then become 1
	{
		exponent = 1;
	}
	for (int i = 0; i < exponent; i++) //Calculate for exponent
	{
		result *= base;
	}
	cout << "The result: " << base << "^" << exponent << " = " << result << endl;
}
void CalculateSine(void)
{
	float opposite;
	float hypotenuse, result;

	cout << "Please input the length of opposite side:" << endl;
	cin >> opposite;
	cout << "Please input the the length of the hypotenuse:" << endl;
	cin >> hypotenuse;

	result = opposite/hypotenuse;
	
	cout << "The sine value: " << opposite << "/" << hypotenuse << " = " << result << endl;
}

int main()
{
	int choice;
	cout << "<1> To calculate the base raised to the exponent " << endl;
	cout << "<2> To calculate the sine of an angle " << endl;
	cout << "Please enter <number>: ";
	cin >> choice;
	
	if (choice == 1)
	{
		CalculateExponent();
	}
	else if (choice == 2)
	{
		CalculateSine();
	}
	system("pause");
	return 0;
}