#include "Sally.h"



Sally::Sally()
{
}

Sally::Sally(int a)
{
	num = a;
}

Sally Sally::operator+(Sally aso)
{
	Sally Brandnew;
	Brandnew.num = num + aso.num;
	return (Brandnew);
}

