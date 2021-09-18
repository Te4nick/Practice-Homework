#include <iostream>
using namespace std;
//S=100.  n=1.  p=20.  m=10
int main() {
    float m, S, P;
    unsigned int n;
    cout << "Enter S, p, n: ";
    cin >> S;
    cin >> P;
    cin >> n;
    if (S <= 0 || n <= 0 || P <= 0) {
        cout << "Error: inputs <= 0";
    }
    else {
        float r = P / 100;
        m = (S*r*pow(1+r, n))/(12*(pow(1+r, n)-1));
        cout << "m = " << m;
    }
    return 0;
}
