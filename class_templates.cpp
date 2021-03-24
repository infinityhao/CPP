#include <iostream>
using namespace std;

template <class T>
class Vincent {
	T first, second;
public:
	Vincent(T a, T b) {
		first = a;
		second = b;
	}
	T bigger();
};

template <class T> //function member outside the class, template <class T> needs to declare again
T Vincent<T>::bigger() { //we need to tell c++, this function tight with class templates <T>
	return(first > second ? first : second);
}

int main() {
	Vincent <int>vo(69, 105); //whenever using class template what type of data substiting the T
	cout << vo.bigger(); //the <int> will substitute template <class T> above  
}