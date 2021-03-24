//polymorphism
#include <iostream>
using namespace std;

class Enemy {
protected:
	int attackPower;
public:
	void SetAttackPower(int a) {
		attackPower = a;
	}
};

class Ninja : public Enemy{
public:
	void attack() {
		cout << "I am a ninja, ninja chop -" << attackPower << endl;
	}
};

class Monster : public Enemy {
public:
	void attack() {
		cout << "Monster must eat you !!!! -" << attackPower << endl;
	}
};

int main() {
	Ninja n; //create an object to attach
	Monster m;
	Enemy *enemy1 = &n;  //connecting pointer to an object
	Enemy *enemy2 = &m;
	enemy1->SetAttackPower(29);
	enemy2->SetAttackPower(99);
	
	n.attack();
	m.attack();
}