#include "Ram.h"
#include <iostream>
#include <string>

using namespace std;

Ram::Ram() {
	for (int i = 0; i < 100 * 1024; i++) {
		mem[i] = 0;
	}
	size = 100 * 1024;
}

Ram::~Ram() {
	cout << "�޸� ���ŵ�" << endl;
}

char Ram::read(int address) {
	return mem[address];
}

void Ram::write(int address, char value) {
	mem[address] = value;
}