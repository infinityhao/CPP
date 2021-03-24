//Create an array of integers, at least 5 in size, and pass it to the avg function.
//Inside the function, use a loop to iterate over the array elements and calculate the average.

#include <iostream>
using namespace std;

double avg(int input[], int array_size)
{
	int sum = 0;
	for (int i = 0; i < array_size; i++)
	{
		sum += input[i];
	}
	return sum / array_size;
}

int main()
{
	int input[4];
	
	cout << "Please enter 5 integers to average" << endl;

	for (int i = 1; i < 6; i++)
	{
		cout << "Integer " << i << endl;
		cin >> input[i-1];
	}
	
	cout << "The average: "<< input[0] << "+" << input[1] << "+" << input[2] << "+" << input[3] << "+" << input[4] << "/5" << endl;
	cout << "=" << avg(input, 4) << endl;
	system("Pause");
	return 0;
}

