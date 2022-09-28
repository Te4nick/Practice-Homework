#pragma once
#ifndef _HASH_H
#define _HASH_H
#include <string>
class Hash {
public:
	void incert(int id, int group, std::string name);
	void remove(int id);
	std::string find(int id);
	void print();
	void clear();

private:
	struct Student
	{
		unsigned int id = 0;
		unsigned int group = 0;
		std::string name = "";
		Student(int i, int g, std::string n): 
			id(i), group(g), name(n) {}
		Student() {}
		bool is_empty();
		std::string to_string();
	};
	int table_length = 100;
	Student *table = new Student[table_length];
	
	void enlarge();
	int hashf(int id);
	int hashg(int id, int i);
};
#endif
