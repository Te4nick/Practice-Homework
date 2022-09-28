#include "Hash.h"
#include <iostream>

// Student struct
bool Hash::Student::is_empty() {
	if (this->id == 0) return true;
	return false;
}

std::string Hash::Student::to_string() {
	return std::to_string(id) + " " + std::to_string(group) + " " + name;
}

// Private methods
void Hash::enlarge() {
	Student* tmp = new Student[table_length * 2];
	memcpy(tmp, table, table_length * sizeof Student);
	table_length *= 2;
	table = tmp;
}

int Hash::hashf(int id) {
	return id % 10;
}

int Hash::hashg(int id, int i) {
	return id % 10 + i*3;
}

// Public methods
void Hash::incert(int id, int group, std::string name) {
	Student s(id, group, name), empty;
	int h = hashf(s.id);
	if (table[h].is_empty()) table[h] = s;
	else for (int i = 1; i < table_length; i++)
	{
		h = hashg(s.id, i);
		if (table[h].is_empty())
		{
			table[h] = s;
			return;
		}
	}
}

void Hash::remove(int id) {
	int h = hashf(id);
	if (table[h].is_empty()) return;
	if (table[h].id == id)
	{
		table[h] = Student();
		return;
	}
	else for (int i = 1; i < table_length; i++)
	{
		h = hashg(id, i);
		if (table[h].id == id)
		{
			table[h] = Student();
			return;
		}
	}
}

std::string Hash::find(int id) {
	int h = hashf(id);
	if (table[h].is_empty()) return "";
	if (table[h].id == id) return table[h].to_string();
	else for (int i = 1; i < table_length; i++)
	{
		h = hashg(id, i);
		if (table[h].id == id) return table[h].to_string();
	}
}

void Hash::print() {
	for (int i = 0; i < table_length; i++)
	{
		if (!table[i].is_empty()) std::cout << table[i].to_string() << "\n";
	}
}

void Hash::clear() {
	for (int i = 0; i < table_length; i++)
	{
		if (!table[i].is_empty()) table[i] = Student();
	}
}
