#include <iostream>
#include <string>
#include "Byte1set.h"

int main() {
	//std::bitset<8> b1{0xFF};
	//char val[2] = { 'A', 'B' };
	//char mask[2] = { 'F', 'F' };
	//char val[2] = { '0', '0' }, mask[2] = { '0', '0' };
	
	int n;
	std::cin >> n;
	const int n1 = n;
	std::string val, mask;
	
	Byte1set *bytes = new Byte1set[n];
	for (int i = 0; i < n; i++) {
		std::cin >> val >> mask;
		bytes[i] = Byte1set(val, mask);
		val.clear(), mask.clear();
	}
	// ((bytes[0] & bytes[1])).getVal();
	// Byte1set b2(val, mask);
	// std::bitset<8> b2{ "00100100" };
	std::cout << ((bytes[0] & bytes[1])).getVal() << std::endl;
	return 0;
}
