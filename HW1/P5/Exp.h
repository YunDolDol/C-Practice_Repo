#ifndef EXP_H
#define EXP_H

class Exp {
	int base, exp;
public:
	Exp();
	Exp(int b);
	Exp(int b, int e);
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);
};
#endif // !EXP_H
