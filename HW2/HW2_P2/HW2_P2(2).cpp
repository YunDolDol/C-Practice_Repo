#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "문자열을 입력하세요. >> ";
	getline(cin, s, '\n');
	int index = 0;
	int count = 0;

	while (true) {
		if (s.find('a', index) == 'a')
			count++;
		
	}
}