#include <iostream>
using namespace std;

template <class T>
class Spunky {
public:
	Spunky(T x) {
		cout << x << " is not a character!" << endl;
	}
};

template<> //To tell c++ this is a template specialization
class Spunky<char> { //data to be specialize in
public:
	Spunky(char x) {
		cout << x << " is indeed a character!" << endl;
	}
};
int main() {
	Spunky<int> obj1(4);
	Spunky<double> obj2(4.17);
	Spunky<char> obj3('K');
}