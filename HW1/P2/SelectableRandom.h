#ifndef RANDOM_H
#define RANDOM_H

class SelectableRandom { // SelectableRandom 클래스가 짝수, 홀수를 선택할 수 있도록
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

int SelectableRandom::OddnextInRange(int start, int end) { // 홀수 랜덤 정수
	int n;
	do {   
		n = rand() % (end - start + 1) + start;   //end 10, start 3
	} while (n % 2 != 1);
	return n;
}

#endif