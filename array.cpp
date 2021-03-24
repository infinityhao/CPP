//array.cpp
//Arrays are zero indexed
//Array types
//Iterating over an array


#include <iostream>
#include <cstdio>

void printArray(int theArray[], int sizeOfArray)
{
	for (int x = 0; x < sizeOfArray; x++)
	{
		std::cout << theArray[x] << std::endl;
	}
}

int main()
{
	int ArrayA[] = { 1,2,3,4,5 };
	int ArrayB[10];
	int ArrayC[10] = { 1,2,3 };
	int sum = 0;
	ArrayA[0] = 2;

	std::cout << ArrayA[4] << std::endl;

	std::cout << "The total is " << sum << std::endl;

	printArray(ArrayC, 3);

	std::system("Pause");
}
