#pragma once
#include <iostream>

using namespace std;

class tempStat
{
public:
	double minimum, maximum;
	static const size_t RECORD_SIZE = 2 * sizeof(double); // 2*16

	tempStat(double min = 0.0, double max = 0.0)
		:minimum(min), maximum(max)
	{}

	//write tempStat at current "put" location in file stream.
	//write operation
	void write(ostream & os)
	{
		os.write((char*)&minimum, sizeof(double));  //pass the minimum values address to char pointer.
		os.write((char*)&maximum, sizeof(double));
	}

	//Read tempStat at current "get" location in file stream.
	//Read operation
	void read(istream & is)
	{
		is.read((char*)&minimum, sizeof(double));
		is.read((char*)&maximum, sizeof(double));
	}
	
	//Write tempStat at specified index in file stream.
	void write(ostream & os, int index)
	{
		streampos pos(index * RECORD_SIZE); //specified absolute position of the file.

		os.seekp(pos); //seek put specified where to write the file.
		cout << "About to write record at position " << os.tellp() << endl;

		os.write((char*)&minimum, sizeof(double));  
		os.write((char*)&maximum, sizeof(double));
	}

	//Read tempStat at specified index in file stream.
	void read(istream & is, int index) //index is the all months of a year
	{
		streampos pos(index * RECORD_SIZE); //0 * 16 = 1 * 16 (Jan = 16)

		is.seekg(pos); //seek get specififed where to read the file
		cout << "About to read record at position " << is.tellg() << endl;

		is.read((char*)&minimum, sizeof(double));
		is.read((char*)&maximum, sizeof(double));
	}
	
};

ostream& operator << (ostream & os, const tempStat & ts);
istream& operator >> (istream& is, const tempStat & ts);