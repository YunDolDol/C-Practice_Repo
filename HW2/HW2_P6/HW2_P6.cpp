#include <iostream>
#include <string>
using namespace std;

// 키보드에서 원의 개수를 입력받고, 그 개수만큼 원의 이름과 반지름을 입력받고,
// 다음과 같이 실행되도록 main() 함수를 작성하라. Circle, CircleManager 클래스도 완성하라.

class Circle {
	int radius; // 원의 반지름 값
	string name; // 원의 이름
public:
	void setCircle(string name, int radius); // 이름과 반지름 설정
	double getArea();
	string getName();
};

void Circle::setCircle(string name, int radius) {
	this->name = name;
	this->radius = radius;
}
 
double Circle::getArea() {
	return 3.14 * radius * radius;
}

string Circle::getName() {
	return name;
}

class CircleManager {
	Circle* p; // Circle 배열에 대한 포인터
	int size; // 배열의 크기
public:
	CircleManager(int size); // size 크기의 배열을 동적 생성. 사용자로부터 입력 완료.
	~CircleManager();
	void searchByName(); // 사용자로부터 원의 이름을 입력받아 면적 출력
	void searchByArea(); // 사용자로부터 면적을 입력받아 면적보다 큰 원의 이름 출력                   
};

CircleManager::CircleManager(int size) {
	p = new Circle[size];
	this->size = size;
	int radius; string name;

	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}

CircleManager::~CircleManager() {
	delete[] p;
}

void CircleManager::searchByName() {
	string naming;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> naming;

	for (int i = 0; i < size; i++) {
		if (p[i].getName() == naming) {
			cout << naming << "의 면적은 " << p[i].getArea() << endl;
			break;
		}
	}
}

void CircleManager::searchByArea() {
	int area;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> area;
	cout << area << "보다 큰 원을 검색합니다." << endl;
	
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
		}
	}
}

int main() {
	cout << "20181504 윤병수" << endl;
	cout << "원의 개수 >> ";
	int size;
	cin >> size; // 원의 개수 입력받기

	CircleManager CircleManager(size);
	CircleManager.searchByName();
	CircleManager.searchByArea();

}