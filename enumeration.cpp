//enumeration.cpp
//To use enumeration to create symbolic constants
//

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	enum Day {Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

	Day payDay;
	payDay = Thursday;

	cout << payDay << endl;
	getchar();

}