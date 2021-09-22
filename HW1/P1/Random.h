#ifndef RANDOM_H
#define RANDOM_H

class Random { // Random Ŭ������ ������, next(), NextInRange()�� 3���� ��� �Լ��� �������� �ۼ�
	int seed = 0;
public:
	int next();
	int nextInRange(int start, int end);
};

int Random::next() {
	int n = rand();
	return n;
}

int Random::nextInRange(int start, int end) {
	int n = rand() % (end - start + 1) + start;
	return n;
}

#endif