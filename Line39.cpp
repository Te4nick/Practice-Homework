/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string sym;
	cout << "Enter string to find:\n";
	cin >> sym;
	int c = 0;
	string line;
	ifstream in(R"(file.txt)");  // окрываем файл для чтения
	if (in.is_open())
	{
		while (!in.eof())
		{
			getline(in, line);
            while (line.find(sym) != string::npos)
            {
                int occurrence = line.find(sym);
                line = line.substr(occurrence + 1, line.length());
                c += 1;
            }
		}
	}
	cout << c << endl;
	in.close();

	return 0;

}
*/