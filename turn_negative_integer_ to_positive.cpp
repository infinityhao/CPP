#include <iostream>
using namespace std;

int main() {
	int negativeN = -5;
	int positiveN1 = 0;
	int positiveN2 = 0;

	positiveN1 = abs(negativeN);
	positiveN2 = abs(positiveN1);

	cout << "positiveN1 = " << positiveN1 << endl;
	cout << "positiveN2 = " << positiveN2 << endl;
}