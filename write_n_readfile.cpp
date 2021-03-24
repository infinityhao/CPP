// write_n_readfile.cpp
// To demonstrate how to use ofstream writer to create and writing file and ifstream reader 

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream writer("file1.txt");
	if(writer.is_open())
	{
		int bird = 10;
		writer << "Some text" << endl;
		writer << "Some more text" << endl;
		writer << "There are birds: " << bird << endl;
		cout << "Writing was succeessful" << endl;
	}
	else
	{
		cout << "Error writing file" << endl;
	}
	writer.close();
	ifstream reader("file1.txt");
	if (reader.is_open())
	{
		char a[512], b[512];
		reader >> a;
		reader >> b;
		cout << "a: " << a << endl;
		cout << "b: " << b << endl;
	}
	else
	{
		cout << "Error reading file" << endl;
	}
	reader.close();
	system("pause");
	return 0;
}


