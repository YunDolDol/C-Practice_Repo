#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0;
	string input;
	cout << "���ڿ��� �Է��ϼ���. ���鵵 �����մϴ�. >> ";
	getline(cin, input, '\n');
	int len = input.length(); // input�� string �� ����

	for (int i = 0; i < len; i++) {
		if (input[i] == 'a')
			count++;
	}
	cout << "���� a�� " << count << "�� �ֽ��ϴ�.";
}
