#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ofstream out (R"(C:\Users\Te4nick\Downloads\file.txt)");  // поток для записи
    if (out.is_open())
    {
        out << "Hello World!" << endl;
    }
    out.close();

    string line;
    ifstream in(R"(C:\Users\Te4nick\Downloads\file.txt)");  // окрываем файл для чтения
    if (in.is_open())
    {
        while (getline(in, line))
        {
            cout << line << endl;
        }
    }
    in.close();

    cout << "End of program" << endl;
    return 0;

}
