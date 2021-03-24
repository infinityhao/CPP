#pragma once
#include<iostream>
#include<string>
using namespace std;
class Cat
{
private:
	int age;
	string name;
public:
	Cat(string na, int ag); //constructor infront without the type
	Cat();
	int GetAge() { return age; }
	string GetName() { return name; }
	//void Init(string na, int ag); //not using constructor, inefficient way 
	void Meow() { cout << "Meow! "; }
	void Introduce();
};