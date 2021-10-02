#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0;
	string input;
	cout << "문자열을 입력하세요. 공백도 가능합니다. >> ";
	getline(cin, input, '\n');
	int len = input.length(); // input의 string 총 길이

	for (int i = 0; i < len; i++) {
		if (input[i] == 'a')
			count++;
	}
	cout << "문자 a는 " << count << "개 있습니다.";
}
