//To generate random numbers from the program
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	srand(time(NULL)); //this to generates real random number
	for(int i=0; i<10; i++)
	{ 
		cout << (rand() % 8999) +1000 << endl; // this generates a random number from 1000-9999
	}
	system("pause");
	return 0;
}