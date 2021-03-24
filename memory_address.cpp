#include <iostream>
using namespace std;

int main() {

	int memory[5];
	int* mem0 = &memory[0];
	int* mem1 = &memory[1];
	int* mem2 = &memory[2];

	cout << "mem0 is at " << mem0 << endl;
	cout << "mem1 is at " << mem1 << endl;
	cout << "mem2 is at " << mem2 << endl;

	mem0++;
	cout << "mem0++, mem0 now is at " << mem0 << endl;
	mem0 += 1;
	cout << "mem0+=2, mem0 now is at " << mem0 << endl;
}
