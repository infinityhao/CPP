//Pure virtual function to ensure inheritated class must overrode pure virtual function
#include <iostream>
using namespace std;

class Enemy {
public:
	virtual void attack() = 0; //abstract class, no implementation at all, one rule the inheritated/derrived 
};							   //class must overrode pure virtual function		

class Ninja : public Enemy {
public:
	void attack() {
		cout << "ninja attack!" << endl;
	}
};

class Monster : public Enemy {
	void attack() { 
		cout << "monster attack!" << endl; //if do not implement, it will cause error, "cannot instantiate abstract class"  
	}
};

int main() {
	Ninja n; //create objects from the selected classes
	Monster m;
	Enemy* enemy1 = &n; //establish virtual function connection with the objects
	Enemy* enemy2 = &m;
	enemy1->attack(); //run the established virtual function's object
	enemy2->attack();
}