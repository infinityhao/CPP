//string.cpp
//To demonstrate character array
//>> operator inputs a single word
//f you want to input an entire line of text, you should use the std::getline() function instead

#include <iostream>
#include <string>
using namespace std;

int main()
{
	char isAString[6] = { 'H','e','l','l','o','\0'};
	char isNotAString[5] = { 'H','e','l','l','o'};
	const char *str = "Hello!";//c style str, reserved 7 bytes for it, 7th bytes for the last terminator '\0'
	char str2[512] = "Hello to you";
	string s = "Some text!"; //this is a class

	cout << isAString << endl;
	cout << isNotAString << endl;
	cout << str << endl;
	cout << str2 << endl;
	cout << s << endl;

	//append/concatenate
	string word = " abc123";
	//s = s + word;
	s += word;
	cout << "s + word = " << s << endl;
	s.append("456"); // same as plus
	cout << "s + word + append = " << s << endl;

	//function
	cout << s.at(0) << endl;
	cout << "Insert xxx after character 1 = "<< s.insert(1, "xxx") << endl;
	cout << "Replace nothing after character 1 = " << s.replace(1,3, "") << endl;
	cout << "The length of string s = " << s.length() << endl; 
	cout << "The 'text' position = " << s.find("text") << endl;
	cout << "Sub string of 'text' only = " << s.substr(5,4) << endl; 
	cout << "Sub string of 'text' after = " << s.substr(5) << endl;

	system("pause");
	return 0;
}