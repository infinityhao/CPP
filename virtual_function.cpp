//virtual function - options to overridden in the drive class
#include <iostream>
using namespace std;

class Enemy {
public:
	virtual void attack() {
		cout << "I am from abstract class" << endl;		//virtual function is like a templates function,   
	}													//once assign address it will know what types of templates to use
};	  
							      
class Ninja : public Enemy {
public:
	void attack() { 
		cout << "ninja attack!" << endl; 
	}
};

class Monster : public Enemy {
	//void attack() { 
		//cout << "monster attack!" << endl; //if do not implement, it will use the default inheriting from enemy class  
	//}
};

int main() {
	Ninja n; //create objects from the selected classes
	Monster m;
	Enemy *enemy1 = &n; //establish virtual function connection with the objects
	Enemy *enemy2 = &m;
	enemy1->attack(); //run the established virtual function's object
	enemy2->attack();
}