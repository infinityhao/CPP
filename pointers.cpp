// To demonstrates how to use simple pointers
// pointers(left side *) = dereference(right side *)

#include <iostream>
using namespace std;

int main()
{
	int num = 3;
	int *pnum = &num;

	cout << num << endl;
	
	cout << pnum << endl;
	cout << *pnum << endl; //dereference operator

	*pnum = 45;
	cout << *pnum << endl;
	cout << num << endl;

	system("pause");
	return 0;
}