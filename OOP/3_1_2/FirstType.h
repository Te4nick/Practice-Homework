#ifndef _FIRSTTYPE_H
#define _FIRSTTYPE_H

class SecondType;

class FirstType {
public:
	FirstType(int a);
	friend int getMax(FirstType &f, SecondType &s);
private:
	int a;
};
#endif