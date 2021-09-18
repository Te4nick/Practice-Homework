/*
#include <iostream>
using namespace std;

int main() {
    double N;
    cout << "Enter N:\n";
    cin >> N;
    if (N <= 1) {
        for (int i = 1; i < 10 + 1; ++i) {
            cout << i << endl;
        }
    }
    else {
        if (N - trunc(N) != 0.0) {
            for (int i = int(trunc(N))+1; i < int(trunc(N)) + 10 + 1; ++i) {
                cout << i << endl;
            }
        }
        else {
            for (int i = int(N); i < int(N) + 10 + 1; ++i) {
                cout << i << endl;
            }
        }
    }
    return 0;
}
*/