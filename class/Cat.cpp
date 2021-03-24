#include "Cat.h"
Cat::Cat() //::binary scope resolution operator 
{
	name = "unamed";
	age = 0;
}
Cat::Cat(string na, int ag) //constructor infront without the type
{
	name = na;
	age = ag;
}
/*void Cat::Init(string na, int ag)
{
	name = na;
	age = ag;
}*/
void Cat::Introduce()
{
	Meow();
	cout << "My name is " << name << ", and I'm " << age << " years old " << endl;
}