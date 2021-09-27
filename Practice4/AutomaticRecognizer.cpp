/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string roma_num;
    cin >> roma_num;
    int s = 0;
    for (int i = 0; i < roma_num.length(); ++i) {
        if (char(roma_num[i]) == 'I') {
            if (char(roma_num[i+1]) == 'V' || char(roma_num[i+1]) == 'X') s = s - 1;
            else s = s + 1;
        }
        if (char(roma_num[i]) == 'X') {
            if (char(roma_num[i+1]) == 'L' || char(roma_num[i+1]) == 'C') s = s - 10;
            else s = s + 10;
        }
        if (char(roma_num[i]) == 'C') {
            if (char(roma_num[i+1]) == 'D' || char(roma_num[i+1]) == 'M') s = s - 100;
            else s = s + 100;
        }
        if (char(roma_num[i]) == 'V') s = s + 5;
        if (char(roma_num[i]) == 'L') s = s + 50;
        if (char(roma_num[i]) == 'D') s = s + 500;
        if (char(roma_num[i]) == 'M') s = s + 1000;
    }
    cout << s;
    return 0;
}
*/