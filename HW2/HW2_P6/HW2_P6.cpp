#include <iostream>
#include <string>
using namespace std;

// Ű���忡�� ���� ������ �Է¹ް�, �� ������ŭ ���� �̸��� �������� �Է¹ް�,
// ������ ���� ����ǵ��� main() �Լ��� �ۼ��϶�. Circle, CircleManager Ŭ������ �ϼ��϶�.

class Circle {
	int radius; // ���� ������ ��
	string name; // ���� �̸�
public:
	void setCircle(string name, int radius); // �̸��� ������ ����
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
	Circle* p; // Circle �迭�� ���� ������
	int size; // �迭�� ũ��
public:
	CircleManager(int size); // size ũ���� �迭�� ���� ����. ����ڷκ��� �Է� �Ϸ�.
	~CircleManager();
	void searchByName(); // ����ڷκ��� ���� �̸��� �Է¹޾� ���� ���
	void searchByArea(); // ����ڷκ��� ������ �Է¹޾� �������� ū ���� �̸� ���                   
};

CircleManager::CircleManager(int size) {
	p = new Circle[size]; // ���⼭ �Ǽ�. Circle *p = new Circle[size]�� �߾��µ� �Ǳ� �Ǵµ� ���� �̻���.
	this->size = size; // ���⼭ �Ǽ�. �޴� ���ڰ� ��ü Circle�� name���� ���� �ϱ� ������ this �����͸� ��� �߾���. �� �κ��� �ƿ� ��ħ.
	int radius; string name;

	for (int i = 0; i < size; i++) {
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}

CircleManager::~CircleManager() { // ���⼭ �Ǽ�. �Ҹ��ڴ� �ƿ� ���� �����µ� �ٽ� �������.
	delete[] p;
}

void CircleManager::searchByName() {
	string naming; // ���⼭ �Ǽ�, Circle�� name�� ������ ����µ� ���ļ� �̻��ϰ� ���ư�����. naming���� �ٲٴ� �ٷ� ��.
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> naming;

	for (int i = 0; i < size; i++) {
		if (p[i].getName() == naming) {
			cout << naming << "�� ������ " << p[i].getArea() << endl;
		}
	}
}

void CircleManager::searchByArea() {
	int area;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> area;
	cout << area << "���� ū ���� �˻��մϴ�." << endl;
	
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ", ";
		}
	}
}

int main() {
	cout << "20181504 ������" << endl;
	cout << "���� ���� >> ";
	int size;
	cin >> size; // ���� ���� �Է¹ޱ�

	CircleManager CircleManager(size);
	CircleManager.searchByName(); // ���⼭ �Ǽ�. �׳� �ܼ��� void searchByName(); �̷��� �߾���. �׷��� �ٷ� ������ ��.
	CircleManager.searchByArea(); // ���⼭ �Ǽ�. �׳� �ܼ��� void searchByArea(); �̷��� �߾���. �׷��� �ٷ� ������ ��.
}