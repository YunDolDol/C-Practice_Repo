#ifndef INTEGER_H
#define INTEGER_H

class Integer {
public:
	int n;
	Integer(int n) {
		this->n = n;
	}

	Integer(string str) {
		this->n = stoi(str);
	}

	int get() {
		return n;
	}

	void set(int n) {
		this->n = n;
	}

	int isEven() {
		if (n % 2 != 0)
			return true;
		else
			return false;
	}
};

#endif // !INTEGER_H
