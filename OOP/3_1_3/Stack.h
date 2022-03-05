#ifndef _STACK_H
#define _STACK_H

class Stack {
public:
	Stack(char name[10], int length);
	bool add(int a);
	bool pop(int pos);
	char* getName();
	int getLength();
	int getAmount();
	int* getStack();
	~Stack();
private:
	int length, current = 0, *stack;
	char *name;
};
#endif