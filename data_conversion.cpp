// data_conversion.cpp : Testing for data types and conversion
//

#include <iostream>
#include <cstdio>

int main() 
{
	int i{ 3 / 2 };
	i = static_cast<int>(3.2); //When we pass in a variable, that variable is evaluated to produce its value,
	i = 2.9;	               //which is then converted to the new type. The variable is not affected by casting its value.
	i = -1;
	std::cout << i << std::endl;
	std::getchar();

	auto d{ 3.0 / 2 };
	
	std::cout << d << std::endl;
	std::getchar();
}
