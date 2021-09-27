#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string getString(){
    srand(time(0));
    string s(100, '0'), dict = "1234567890AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
    for (int i = 0; i < 100; ++i) {
        s[i] = dict[rand() % 62];
    }
    return s;
}

int main() {

    ofstream out (R"(C:\Users\Te4nick\Downloads\file.txt)");  // поток для записи
    if (out.is_open())
    {
        out << getString() << endl;
    }
    out.close();

    string line;
    string nums = "1234567890";
    ifstream in(R"(C:\Users\Te4nick\Downloads\file.txt)");  // окрываем файл для чтения
    if (in.is_open())
    {
        while (getline(in, line))
        {
            cout << line << endl;
            for (int i = 0; i < 100; i++)
            {
                if (nums.find(line[i]) != -1)
                {
                    cout << line[i];
                }
            }
            cout << endl;
        }
        
    }
    in.close();

    return 0;

}