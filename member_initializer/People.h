#pragma once
#include <string>
#include "Birthday.h"
using namespace std;
class People
{
public:
	People(string n, Birthday bo);
	void printInfo();
	~People();
private:
	string name;
	Birthday dateOfBirth;
};

