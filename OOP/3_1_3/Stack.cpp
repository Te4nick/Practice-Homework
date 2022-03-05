#include "Stack.h"

Stack::Stack(char name[10], int length = 1) {
	this->name = name;
	this->length = length;
	this->stack = new int[length];
}

bool Stack::add(int a)
{
	if (current < length) {
		stack[current] = a;
		current++;
		return true;
	}
	return false;
}

bool Stack::pop(int pos) {
	if ((0 <= pos) and (pos <= length)) {
		for (int i = pos; i < length - 1; i++) {
			stack[i] = stack[i + 1];
		}
		stack[length - 1] = 0;
		return true;
	}
	return false;
}

char* Stack::getName()
{
	return name;
}

int Stack::getLength()
{
	return length;
}

int Stack::getAmount()
{
	return current + 1;
}

int* Stack::getStack()
{
	return stack;
}

Stack::~Stack() {
	delete[] stack;
	delete[] name;
}
