//switch.cpp
//if else if > 5, is better to use switch statement
//

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	char response;
	
	cout << "Please select your choice: Y/N" << endl;
	cin >> response;
	
	
	switch (response)
	{
	case 'Y': //Cannot use || operator, if want use then use if control statement.
	case 'y':
		cout << "You had selected y or Y" << endl;
		break;
	case 'N':
	case 'n':
		cout << "You had selected n or N" << endl;
		break;
	default:
		cout << "You didn't choose a valid option" << endl;
		break;
	}
	getchar();
	getchar();
}