#include <bitset>
#include <string>
#ifndef _BYTE1SET_H
#define _BYTE1SET_H
class Byte1set
{
public:
	Byte1set(std::string val = "00000000", std::string active = "00000000");
	std::string getVal();
	void setVal(std::string val = "11111111");
	std::string getMask();

	Byte1set operator & (Byte1set b2) {
		std::string valb2 = b2.getVal();
		std::string maskb2 = b2.getMask();
		for (int i = 0; i < 8; i++) {
			if ((int)this->mask[i] & (int)maskb2[i]) {
				this->val[i] = (char)((int)this->val[i] & (int)valb2[i]);
			}
		}
		return *this;
	}

	Byte1set operator | (Byte1set b2) {
		std::string valb2 = b2.getVal();
		std::string maskb2 = b2.getMask();
		for (int i = 0; i < 8; i++) {
			if ((int)this->mask[i] & (int)maskb2[i]) {
				this->val[i] = (char)((int)this->val[i] | (int)valb2[i]);
			}
		}
		return *this;
	}
protected:
	/*std::bitset<8> *val;
	std::bitset<8> *mask;*/
	std::string val;
	std::string mask;
};


#endif
