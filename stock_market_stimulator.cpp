#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a;
	float p = 10000;
	float r = 0.15;

	for (int year = 1; year <= 30; year++)
	{
		a = p * pow(1 + r, year);
		cout << "Year " << year << " ----- $" << a << endl;
	}
}