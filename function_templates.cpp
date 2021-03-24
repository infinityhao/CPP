#include <iostream>
using namespace std;

//template <class vincent> //generic data types
template <class F, class S> //prefered using single capital letter as class name



F smaller(F a, S b) {
	return(a < b ? a : b);
}
/*
vincent addCrap(vincent a, vincent b) {    //only can has one templates function at a time
	return a + b;
}*/

int main() {
	int x = 89;
	double y = 56.78;
	//double x = 2.2, y = 4.1, z;
	//z = addCrap(x, y);
	//cout << z << endl;

	cout << smaller(x, y) << endl;
}