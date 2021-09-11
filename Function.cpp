/*
#include <iostream>
using namespace std;

int main() {
    float x, y, b;
    cout << "Enter x, y, b: ";
    cin >> x; cin >> y; cin >> b;
    cout << endl;
    if (b - y <= 0) cout << "Error: natural log from a negative number or 0\n";
    if (b - x < 0)  cout << "Error: square root from a negative number\n";
    if (b - y > 0 && b - x >= 0) {
        float z = log(b - y) * sqrt(b - x);
        cout << z;
    }
    return 0;
}
*/