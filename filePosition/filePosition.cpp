#include <iostream> //For cin, cout
#include <fstream> //For ostream and ifstream
#include "tempStat.h"
using namespace std;

//Prototypes for helper functions
void updateStat(int index);
void displayStat(int index);
void displayAllStats();

//Progress entry point
int main()
{
	cout << "Temperature stats initially:" << endl;
	displayAllStats();

	int index;
	cout << "Which month's stats do you want to update [0...11]? ";
	cin >> index;

	if (index < 0 || index >= 12)
	{
		cerr << "Invalid index." << endl;
	}
	else
	{
		updateStat(index);
		displayStat(index);

		cout << "Temperature stats finally: " << endl;
		displayAllStats();

		return 0;
	}
}

void displayAllStats()
{
	//ios_base::binary -Specifies the file will be opened in binary mode.
	//ios_base::out -Specifies the file will be opened for output operations.
	//ios_base::in -Specifies the file will be opened for input operations.
	fstream ifile("tempStats.bin", ios_base::binary | ios_base::out | ios_base::in); //needs to read and write so i use fstream
	if (ifile.is_open())
	{
		int index = 0;
		while (ifile.eof())
		{
			tempStat ts;
			ts.read(ifile);

			if (ifile.gcount() == 0) //if nothing, then done
			{
				break;
			}

			cout 
				<< "Index" << index << ", tempStat: " << ts << endl;

			index++;
		}
		ifile.close();
	}
	else
	{
		cerr << "Couldn't open tempStats.bin for reading." << endl;
	}
}

//Helper function, update a tempStat at a particular index.
void updateStat(int index)
{
	tempStat ts;
	cout << "Enter minimum and maximum temperatures: ";
	cin >> ts;

	fstream ofile("tempStats.bin", ios_base::binary | ios_base::out | ios_base::in);
	if (ofile.is_open())
	{
		ts.write(ofile, index);
		ofile.close();
	}
	else
	{
		cerr << "Couldn't open tempStats.bin for writing." << endl;
	}
}

//Helper function, display a tempStat at particular index.
void displayStat(int index)
{
	fstream ifile("tempStats.bin", ios_base::binary | ios_base::out | ios_base::in);
	if (ifile.is_open())
	{
		tempStat ts;
		ts.read(ifile, index);
		ifile.close();
	}
	else
	{
		cerr << "Couldn't open tempStats.bin for reading." << endl;
	}
}   
