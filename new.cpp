//new.cpp
//demonstrate how to use new - create dynamic memory object

#include<iostream>
using namespace std;

int *p1, *p2;
const int SIZE = 5;
int * pArray;


void allocate()
{
	p1 = new int;
	*p1 = 88;
	p2 = new int(99);
}
void multiply(int * pNumber)
{
	*pNumber *= *pNumber;
	cout << "*pNumber = " << *pNumber << endl;
}
int main()
{
	allocate();
	cout << "p1 is " << *p1 << endl;
	cout << "p2 is " << *p2 << endl;
	
	pArray = new int[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		*(pArray + i) = rand() % 100;
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << *(pArray + i) << endl;
	}

	multiply(p1);
	delete p1, p2, pArray;
	system("pause");
	return 0;
}