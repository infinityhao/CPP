#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int dice, numbOfRoll;
float number1, number2, number3, number4, number5, number6;

float probability(float x)
{
	float probability = (x / numbOfRoll)*100;
	return probability;
}

int main()
{
	srand(time(0)); //real random number by seconds;
	cout << "This is program to calculate the probability of a dice over how many rolls" << endl;
	while (numbOfRoll < 1)
	{
		cout << "Please input the rolling number of a dice" << endl;
		cin >> numbOfRoll;
	}

	for (int x = 1; x <= numbOfRoll; x++)
	{
		dice = 1 + (rand()%6);
		cout << dice << " , ";

		switch (dice)
		{
		case 1:
			number1++;
			break;
		case 2:
			number2++;
			break;
		case 3:
			number3++;
			break;
		case 4:
			number4++;
			break;
		case 5:
			number5++;
			break;
		case 6:
			number6++;
			break;
		}
	}
	
	cout << endl << numbOfRoll << " times rolling dice "  << endl;
	cout << "Total occurring of number 1 is: " << number1 << ", the probability is " << probability(number1) << "%" << endl;
	cout << "Total occurring of number 2 is: " << number2 << ", the probability is " << probability(number2) << "%" << endl;
	cout << "Total occurring of number 3 is: " << number3 << ", the probability is " << probability(number3) << "%" << endl;
	cout << "Total occurring of number 4 is: " << number4 << ", the probability is " << probability(number4) << "%" << endl;
	cout << "Total occurring of number 5 is: " << number5 << ", the probability is " << probability(number5) << "%" << endl;
	cout << "Total occurring of number 6 is: " << number6 << ", the probability is " << probability(number6) << "%" << endl;
}