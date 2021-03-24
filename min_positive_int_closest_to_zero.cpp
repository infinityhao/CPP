#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n = 5;

	for (int i = 0; i < n; i++) {
		int t; // a temperature expressed as an integer ranging from -273 to 5526
		t = (rand() % 10);

		int myints[i] = { t };

		//if(!cin.fail()) t = 0;

		cout << *min_element(myints, myints + n) << endl;
	}
}