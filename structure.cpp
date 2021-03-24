//structure.cpp
//To store multiple pierces of data into structure
//

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

struct coffeeBean
{
	string name;
	string country;
	int strength;
};

void main()
{
	coffeeBean myBean = { "Strata", "Columbia", 10 };
	coffeeBean newBean;
	newBean.name = "Florida";
	newBean.country = "Mexico";
	newBean.strength = 9;
	cout << "Coffee bean " + newBean.name + " is from " + newBean.country << endl;
	cout << "Coffee bean " + myBean.name + " is from " + myBean.country << endl;
	getchar();
}