#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	string s;
	cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�) >> " << endl;

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
