//ternary operator functions is somewhat similar to an if statement or a switch statement,
//but in a more compact form and for one single Boolean value with one of two possible outputs.   
//

#include <iostream>
#include <cstdio>

int main()
{
	int i = 1;
	int j = 2;

	std::cout << (i > j ? i : j) << " is greater" << std::endl;
	std::getchar();
	return 0;
}