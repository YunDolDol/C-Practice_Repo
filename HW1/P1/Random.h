#ifndef RANDOM_H
#define RANDOM_H

class Random { // Random 클래스가 생성자, next(), NextInRange()의 3개의 멤버 함수를 가지도록 작성
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