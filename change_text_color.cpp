//This program is to demonstrate how to change windows text color

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "Red text" << endl;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "Green text" << endl;
	for (int i = 0; i < 11; i++)
	{
		cout << "Line number " << i << endl;
	}
	system("pause");
	return 0;
}