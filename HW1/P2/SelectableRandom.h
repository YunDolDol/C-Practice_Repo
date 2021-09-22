#ifndef RANDOM_H
#define RANDOM_H

class SelectableRandom { // SelectableRandom Ŭ������ ¦��, Ȧ���� ������ �� �ֵ���
	int seed = 0;
public:
	int Evennext();
	int OddnextInRange(int start, int end);
};

int SelectableRandom::Evennext() {
	int n;
	do {
		n = rand();
	} while (n % 2 != 0);
	return n;
}

int SelectableRandom::OddnextInRange(int start, int end) { // Ȧ�� ���� ����
	int n;
	do {   
		n = rand() % (end - start + 1) + start;   //end 10, start 3
	} while (n % 2 != 1);
	return n;
}

#endif