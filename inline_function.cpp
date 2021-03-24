#include <iostream> 
#include <cstdio>

using namespace std;
inline int cube(int s)
{
	return s * s*s;
}
int main()
{
	cout << "The cube of 3 is: " << cube(3) << "\n";
	getchar();
	return 0;
} //Output: The cube of 3 is: 27 