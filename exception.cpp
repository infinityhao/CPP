//Exception is a way of handling errors that may occur when program is running
#include <iostream>
using namespace std;

int main() {
	/*
	try { //try block where the error might occured
		int momsAge = 30;
		int sonsAge = 34;

		if (sonsAge > momsAge) {
			throw 99;
		}
	}
	catch (int x) { //what to do when indeed an error
		cout << "son cannot be older than mom, ERROR NUMBER: " << x << endl;
	}
	*/

	try {
		int num1;
		cout << "Enter first number: " << endl;
		cin >> num1;

		int num2;
		cout << "Enter second number: " << endl;
		cin >> num2;

		if (num2 == 0) {
			throw 0;
		}

		cout << num1 / num2 << endl;
	}
	catch (...) {//... means any number
		cout << "You cant divide by 0" << endl;
	}
}	