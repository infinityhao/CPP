#include <iostream>
using namespace std;

int tuna = 69;

int main()
{
	double tuna = 20;
	cout << ::tuna << endl; //use unary scope resolution operator to use global variable.
}