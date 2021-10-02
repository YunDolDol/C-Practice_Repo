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
	cout << "20181504 윤병수" << endl;
	Person People[3];
	string input_name;
	cout << "이름과 전화번호를 입력해 주세요" << endl;
	for (int i = 0; i < 3; i++) {
		string name, tel;
		cout << "사람 " << i+1 << " >> ";
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

	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++) {
		cout << People[i].getName() << " ";
	}

	cout << "전화번호 검색합니다." << "이름을 입력하세요 >> ";
	cin >> input_name;

	for (int i = 0; i < 3; i++) {
		if (People[i].getName()== input_name)
			cout << "전화번호는 " << People[i].getTel();
	}

	return 0;
}