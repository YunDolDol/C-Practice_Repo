#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "���ڿ��� �Է��ϼ���. >> ";
	getline(cin, s, '\n');
	int index = 0;
	int count = 0;

	while (true) {
		if (s.find('a', index) == 'a')
			count++;
		
	}
}