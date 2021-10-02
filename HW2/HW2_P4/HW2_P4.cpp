#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	string s;
	cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다) >> " << endl;

	while (true) {
		cout << ">>";
		getline(cin, s, '\n');
		if (s == "exit")
			break;

		srand((unsigned)time(0));
		int n = rand() % s.length();
		char newchar = 'a' + rand() % 26;
		s[n] = newchar;
		cout << s << endl;
	}
}
