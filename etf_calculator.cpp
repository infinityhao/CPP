//To calculate the estimates profit of SQQQ
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main()
{
	double nasdaq, price, lot, percent;
	int lines;
	double conversion = 1.37;

	cout << "This is a program to calculate ETF estimates profit" << endl;
	cout << endl;
	cout << "Please enter nasdaq index you want to calculates " << endl; cin >> nasdaq;
	cout << "Please enter ETF price" << endl; cin >> price;
	cout << "Please enter ETF quantity in lot" << endl; cin >> lot;
	cout << "Please enter the plunge percentages " << endl; cin >> percent;
	cout << "Please enter the quantity of lines (duration) to display the calculation" << endl; cin >> lines;

	cout << endl;
	cout << "Nasdaq index: " << nasdaq << endl;
	cout << "ETF Price: " << price << endl;
	cout << "Lot: " << lot << endl;

	cout << endl;
	cout << "Display " << lines << " lines" << endl;
	
	double leverage = (percent * 4)/100;
	
	for (int i = 1; i <= lines; i++)
	{
		cout << "-" << percent << "% of " << nasdaq;
		cout << " = " << (nasdaq -= ((nasdaq * percent)/100)) << "(-" << i * percent << "%)";
		cout << " $" << price;
		cout << " *= " << leverage << "% = $" << (price += (price * leverage)) << " SGD" << (price * (lot / 1000)) * conversion << endl;
	}

	system("pause");
	return 0;
}