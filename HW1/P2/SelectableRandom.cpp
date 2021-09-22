#include <cstdlib>
#include <cstdlib>
#include <iostream>
using namespace std;

#include "SelectableRandom.h"

int main() {
	SelectableRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10��-- " << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.Evennext(); // 0���� RAND_MAX(32767) ������ ¦���� ������ ����
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4 ������ ���� Ȧ�� ���� 10 �� --" << endl;
	for (int i = 0; i < 100; i++) {
		int n = r.OddnextInRange(2, 4); // 2���� 4 ������ Ȧ���� ������ ����
		cout << n << ' ';
	}
	cout << endl;
}

