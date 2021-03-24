//do loop will always execute the body of the loop at least once.  
//For the while section, if the condition is true, the do loop will ended.
//

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
	string response;

	do
	{
		cout << "Enter menu choice" << endl << "More" << endl << "Quit" << endl;
		cin >> response;

	} while (response != "Quit");
	return 0;
}