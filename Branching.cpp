/*
#include <iostream>
using namespace std;
int main() {
    float x, a;
    cout << "Enter x, a: ";
    cin >> x; cin >> a;
    cout << endl;
    if (abs(x) < 1) {
        if (x == 0) cout << "Error: natural log from 0\n";
        else {
            float w = a * log(abs(x));
            cout << w;
        }
    }
    else {
        if (a - x*x < 0) cout << "Error: square root from a negative number\n";
        else {
            float w = sqrt(a - x*x);
            cout << w;
        }
    }
    return 0;
}
 */