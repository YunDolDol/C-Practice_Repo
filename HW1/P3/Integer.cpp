#include <iostream>
#include <string>

using namespace std;

#include "Integer.h"

int main() {
	cout << "20181504 ������" << endl;
	Integer n(30);
	cout << n.get() << ' '; // 30 ���
	n.set(50);
	cout << n.get() << ' '; // 50 ���

	Integer m("300");
	cout << m.get() << ' '; // 300 ���
	cout << m.isEven(); // true(������ 1) ���
}