#ifndef _SECONDTYPE_H
#define _SECONDTYPE_H

class FirstType;

class SecondType {
public:
	void setValues(int a, int b);
	friend int getMax(FirstType &f, SecondType &s);
private:
	int a, b;
};
#endif