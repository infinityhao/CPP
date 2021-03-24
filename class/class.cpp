//class.cpp
// to demonstrate how to use classes 
#include<iostream>
#include"Cat.h"
using namespace std;

int main()
{
	
	Cat cat1("Frisky", 2);
	//cat1.Init("Frisky", 2);
	Cat cat2("Cookie", 3);
	Cat catc;
		
	cat1.Introduce();
	cat2.Introduce();
	catc.Introduce();
	
	system("pause");
	return 0;
}