#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

int main() {

	Birthday birthObj(4, 5, 1984);

	People VincentTan("Vincent Tan Yong Hao", birthObj);

	VincentTan.printInfo();
}
