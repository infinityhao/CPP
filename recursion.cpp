//factorial formula is n! = n(n-1)...2.1
//factorial 5!=5(5-1)(5-2)(5-3)(5-4) = 5 x 4 x 3 x 2 x 1
#include <iostream>
using namespace std;

int factorialFinder(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else
	{
		return x * factorialFinder(x - 1);
	}
}

int main()
{
	cout << factorialFinder(4) << endl;
}