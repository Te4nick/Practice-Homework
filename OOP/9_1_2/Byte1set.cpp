#include "Byte1set.h"
Byte1set::Byte1set(std::string val, std::string active) {
	if (val.size() == 2) {
		this->val = (new std::bitset<8>{ (unsigned __int64)(((val[0] >= 'A') ? ((val[0] - 'A' + 10) * 16) : ((val[0] - '0') * 16))
			+ ((val[1] >= 'A') ? (val[1] - 'A' + 10) : (val[1] - '0'))) })->to_string();
		this->mask = (new std::bitset<8>{ (unsigned __int64)(((active[0] >= 'A') ? ((active[0] - 'A' + 10) * 16) : ((active[0] - '0') * 16))
			+ ((active[1] >= 'A') ? (active[1] - 'A' + 10) : (active[1] - '0'))) })->to_string();
		/*this->val = new std::bitset<8>{ (unsigned __int64)(((val[0] >= 'A') ? ((val[0] - 'A' + 10) * 16) : ((val[0] - '0') * 16))
			+ ((val[1] >= 'A') ? (val[1] - 'A' + 10) : (val[1] - '0'))) };
		this->mask = new std::bitset<8>{ (unsigned __int64)(((active[0] >= 'A') ? ((active[0] - 'A' + 10) * 16) : ((active[0] - '0') * 16))
			+ ((active[1] >= 'A') ? (active[1] - 'A' + 10) : (active[1] - '0'))) };*/
	}
	else if (val.size() == 8) {
		this->val = val;
		this->mask = mask;
		/*this->val = new std::bitset<8>{ val };
		this->mask = new std::bitset<8>{ mask };*/
	}
}

std::string Byte1set::getVal() {
	return val;
	/*return val->to_string();*/
}

void Byte1set::setVal(std::string val) {
	if (val.size() == 2) {
		this->val = (new std::bitset<8>{ (unsigned __int64)(((val[0] >= 'A') ? ((val[0] - 'A' + 10) * 16) : ((val[0] - '0') * 16))
			+ ((val[1] >= 'A') ? (val[1] - 'A' + 10) : (val[1] - '0'))) })->to_string();
		/*this->val = new std::bitset<8>{ (unsigned __int64)(((val[0] >= 'A') ? ((val[0] - 'A' + 10) * 16) : ((val[0] - '0') * 16))
		+ ((val[1] >= 'A') ? (val[1] - 'A' + 10) : (val[1] - '0'))) };*/
	} else if (val.size() == 8) {
		this->val = val;
		/*this->val = new std::bitset<8>{ val };*/
	}
}

std::string Byte1set::getMask() {
	return mask;
	/*return mask->to_string();*/
}

