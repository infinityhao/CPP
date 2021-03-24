#include <iostream>
#include "tempStat.h"

//Stream function for tempStat.
//the input and output operator has defined in terms of tempStat just for convenience.
ostream& operator << (ostream & os, const tempStat & ts)
{
	os << ts.minimum << "," << ts.maximum;
	return os;
}

istream& operator >> (istream & is, tempStat & ts)
{
	is >> ts.minimum >> ts.maximum;
	return is;
}