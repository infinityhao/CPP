//call_function.cpp
//

int AddTwo(int i); //Prototype function

int main()
{
	int i{ 4 };
	int j{ AddTwo(i) };
	AddTwo(j);
	j = AddTwo(j);
	return 0;
}
