//char.cpp

#include <iostream>

using namespace std;

int main()
{
	char hello = 'H';
	char isAString[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char isNotAString[5] = { 'H', 'e', 'l', 'l', 'o' };

	cout << hello << endl;
	cout << isAString << endl;
	cout << isNotAString << endl;
	system("Pause");
}