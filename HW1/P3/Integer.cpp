#include <iostream>
#include <string>

using namespace std;

#include "Integer.h"

int main() {
	cout << "20181504 윤병수" << endl;
	Integer n(30);
	cout << n.get() << ' '; // 30 출력
	n.set(50);
	cout << n.get() << ' '; // 50 출력

	Integer m("300");
	cout << m.get() << ' '; // 300 출력
	cout << m.isEven(); // true(정수로 1) 출력
}