/*
#include <iostream>
#include <string>
using namespace std;

string getStar() {
    string s;
    for (int i = 0; i < 16; ++i) {
        if (i % 2 == 0) s += "*";
        else s += " ";
    }
    return s;
}

int main() {
    string star = getStar(), fill(39, '='), line(55, '=');
    for (int i = 0; i < 6; ++i) {
        if (i % 2 == 0) cout << star << fill << endl;
        else cout << star  << endl;
    }
    for (int i = 0; i < 7; ++i) {
        if (i % 2 == 0) cout << line << endl;
        else cout << endl;
    }
    return 0;
}
*/