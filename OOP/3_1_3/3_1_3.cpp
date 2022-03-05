#include <iostream>
#include <iomanip>
#include "Stack.h"

int main() {
	char name1[10], name2[10];
	int flag, n, *a, *b;
	std::cin >> name1 >> n;
	Stack s1(name1, n);
	std::cout << s1.getName() << " " << n << "\n";
	std::cin >> name2 >> n;
	Stack s2(name2, n);
	std::cout << s2.getName() << " " << n << "\n";
	while (true) {
		std::cin >> n;
		if (!(s1.add(n))) break;
	}
	s2.add(n);
	while (true) {
		std::cin >> n;
		if (!(s2.add(n))) break;
	}
	a = s1.getStack();
	b = s2.getStack();
	if (s1.getLength() < s2.getLength()) {
		flag = 1;
	}
	std::cout << std::left << std::setw(15) << s1.getName() << std::setw(15) << s2.getName() << std::right << "\n";
	for (int i = 0; i < std::min(s1.getLength(), s2.getLength()); i++)
	{
		std::cout << std::setw(15) << a[i] << std::setw(15) << b[i] << "\n";

	}
	for (int i = std::min(s1.getLength(), s2.getLength()); i < std::max(s1.getLength(), s2.getLength()); i++)
	{
		if (s1.getLength() < s2.getLength()) {
			std::cout << std::setw(15) << " " << std::setw(15) << b[i] << "\n";
		}
		else {
			std::cout << std::setw(15) << a[i] << std::setw(15) << " " << "\n";
		}
	}
	return 0;
}
