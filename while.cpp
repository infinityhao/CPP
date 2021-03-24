//while.cpp
//while loop to process user input until the user indicates that they have no more data to enter. 
//

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
	string response;
	cout << "Enter menu choice" << endl << "More" << endl << "Quit" << endl;
	cin >> response;

	while (response != "Quit")
	{
		//code to execute
	}
	getchar();
	return 0;
}