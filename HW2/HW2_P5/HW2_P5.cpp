#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel);
};

void Person::set(string name, string tel) {
	this->name = name; this->tel = tel;
}

int main() {
	cout << "20181504 ������" << endl;
	Person People[3];
	string input_name;
	cout << "�̸��� ��ȭ��ȣ�� �Է��� �ּ���" << endl;
	for (int i = 0; i < 3; i++) {
		string name, tel;
		cout << "��� " << i+1 << " >> ";
		cin >> name >> tel;
		People[i].set(name, tel);
	}
	
	/*for (int i = 0; temp[i] != '\n'; i++) {
		if (temp[i] == ' ') {
			for (int j = 0; j < i; j++) {
				temp2[j] = temp[j];
			}
			name = temp2;

			for (int k = 0; temp[k] != '\n'; k++) {
				temp2[k] = temp[i + k + 1];
			}
			tel = temp2;
		}
	}*/

	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++) {
		cout << People[i].getName() << " ";
	}

	cout << "��ȭ��ȣ �˻��մϴ�." << "�̸��� �Է��ϼ��� >> ";
	cin >> input_name;

	for (int i = 0; i < 3; i++) {
		if (People[i].getName()== input_name)
			cout << "��ȭ��ȣ�� " << People[i].getTel();
	}

	return 0;
}