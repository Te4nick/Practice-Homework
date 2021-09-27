#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    srand(time(0));
    ofstream out (R"(C:\Users\Te4nick\Downloads\file.txt)");  // поток для записи
    if (out.is_open())
    {
        for (int i = 0; i < 10; ++i) {
            out << rand() << endl;
        }
    }
    out.close();

    string line;
    int c = 0;
    ifstream in(R"(C:\Users\Te4nick\Downloads\file.txt)");  // окрываем файл для чтения
    if (in.is_open())
    {
        while (getline(in, line))
        {
            c += stoi(line);
        }
    }
    in.close();

    cout << c << endl;
    return 0;

}
