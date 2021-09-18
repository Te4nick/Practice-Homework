#include <iostream>
using namespace std;
// S=100.  n=1.  p=20.  m=10
int main() {
    double m, S;
    unsigned int n;
    bool fl = false;
    cout << "Enter S, m, n:";
    cin >> S;
    cin >> m;
    cin >> n;
    if (S <= 0 || n <= 0 || m <= 0) {
        cout << "Error: inputs <= 0";
    }
    else {
        for (int p = 0; p <= 100; ++p) {
            double r = double(p) / 100.0;
            double m1 = (S*r*pow(1+r, n))/(12*(pow(1+r, n)-1));
            if (m == int(m1)) {
                cout << "p = " << p;
                fl = true;
                break;
            }
        }
        if(!fl) {
            cout << "There are no solutions!";
        }
    }
    return 0;
}
