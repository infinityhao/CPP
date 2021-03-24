//if.cpp
//To demostrate the if control statement
//

#include <iostream>
#include <cstdio>

int main()
{
	char response{ 'y' };

	if (response == 'y' || response == 'Y')
	{
		std::cout << "Positive response received" << std::endl;
		std::getchar();
	}
	return 0;
}