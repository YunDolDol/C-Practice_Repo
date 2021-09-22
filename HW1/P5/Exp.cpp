#include "Exp.h"
#include <iostream>
using namespace std;

Exp::Exp() {
	base = 1, exp = 1;
}

Exp::Exp(int b) {
	base = b, exp = 1;
}

Exp::Exp(int b, int e) {
	base = b, exp = e;
}

int Exp::getValue() {
	int n = 1;
	for (int i = 0; i < exp; i++) { // 3�� 3��
		n *= base;
	}
	return n;
}

int Exp::getBase() {
	return base;
}

int Exp::getExp() {
	return exp;
}

bool Exp::equals(Exp b) {
	if (this->getValue() == b.getValue()) // this->getValue()�� �ڱ��ڽ�
		return true;
	else
		return false;
}