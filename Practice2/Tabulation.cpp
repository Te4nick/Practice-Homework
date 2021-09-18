
#include <iostream>
using namespace std;

int main() {
    float x = -4;
    float y;
    cout <<"   x   |   y  \n";
    for (int i = 1; i < 17+1; i++) {
        if (x == 1) {
            y = NAN;
        }
        else {
            y = (x*x - 2*x + 2)/(x - 1);
        }


        if (x >= 0) {

            if (x - trunc(x) != 0.0) {
                cout << "   " << x << " |   " << y << "  \n";
            } else cout << "   " << x << "   |   " << y << "  \n";
        }
        else {
            if (x - trunc(x) != 0.0) {
                cout << "  " << x << " |  " << y << "  \n";
            } else cout << "  " << x << "   |  " << y << "  \n";

        }

        x = x + float(0.5);
    }
    return 0;
}
