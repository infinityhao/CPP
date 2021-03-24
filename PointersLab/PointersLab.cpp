// PointersLab.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Pointer is confusing because of overloading pointer symbol and dereference symbol

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int PassByValue(int num);
void PassByRef(int &num);

class Person
{
public:
	string name = "Jackie";
	double weight = 70;
	double height = 166;
	
	void ModifyPerson(double newWeight, double newHeight)
	{
		weight = newWeight;
		height = newHeight;
	}
};
int PassByValue(int num)
{
	cout << "PassByValue called: ";
	num++;
	cout << "The new value of num is " << num << endl;
	return num;
	
}
void PassByRef(int &num)
{
	cout << "PassByRef called: ";
	num = 50;
	cout << "The new value of num is " << num << endl;
}


int main()
{
	
	int num1 = 3;
	int Num;
	int *Pnum = &Num;
	*Pnum = 5;
	
	PassByValue(num1);
	cout << "num1 = " << num1 << endl;
	PassByRef(*Pnum);
	cout << "*Pnum = " << *Pnum << endl;
	cout << "Pnum = " << Pnum << endl; // Display memory address
	
	PassByValue(*Pnum);
	cout << "*Pnum = " << *Pnum << endl;

	double *pDouble = new double;
	*pDouble = 5.0;
	cout << "*pDouble = " << *pDouble << endl; //Step 4
	delete pDouble; // deallocate the memory
	cout << "After deallocate *pDouble, pDouble = " << pDouble << endl; 

	Person person;
	cout << "The weight and height of " << person.name << " is " << person.weight << "kg and " << person.height << "cm height" << endl;
	person.ModifyPerson(88.2, 104.5);
	cout << "The new weight and height of " << person.name << " is " << person.weight << "kg and " << person.height << "cm height" << endl;
	system("pause");
	return 0;
}


