#include <iostream>
#include "stdlib.h"
#include "FirstType.h"
#include "SecondType.h"

int getmax(FirstType &f, SecondType &s) {
	return std::max(f.a, std::max(s.a, s.b));
}

int main() {
	int a, b;
	std::cin >> a;
	FirstType f(a);
	std::cin >> a >> b;
	SecondType s;
	s.setValues(a, b);
	std::cout << "max = " << getmax(f, s);
	return 0;
}
