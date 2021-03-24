//To generates real random number for player to guess, -1 to exit
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	srand(time(NULL));
	int input;

	cout << "Please guess the number from 1 to 10, -1 to exit" << endl;

	while (true)
	{
		int randnum = (rand() % 10) + 1;

		cin >> input;
		if (input == randnum)
		{
			cout << "You win!" << endl;
			break;
		}
		else if (input == -1)
			break;
		else
			cout << "You loose, the computer imagined number is: " << randnum << endl;
	}
	system("pause");
	return 0;
}