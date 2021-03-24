#include <iostream>
using namespace std;

char c;
int i;
float f;
double d;
bool b;
wchar_t w;
double s[10];

int main() {
	cout << "The size of char: " << sizeof(c) << "kb" << endl;
	cout << "The size of int: " << sizeof(i) << "kb" << endl;
	cout << "The size of float: " << sizeof(f) << "kb" << endl;
	cout << "The size of double: " << sizeof(d) << "kb" << endl;
	cout << "The size of boolean: " << sizeof(b) << "kb" << endl;
	cout << "The size of wchar_t: " << sizeof(w) << "kb" << endl;
	cout << "The size of double[10]: " << sizeof(s) << "kb" << endl;
	cout << "The size of double[10] / double[0]: " << sizeof(s) / sizeof(s[0]) << "kb" << endl;
}