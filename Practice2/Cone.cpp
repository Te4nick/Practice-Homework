/*
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float R, r, h;
    cout << "Getting cone's full volume and square" << endl;
    cout << "Enter R, r, h: ";
    cin >> R; cin >> r; cin >> h;
    cout << endl;
    if (R > 0 && r > 0 && h > 0) {
        double l = sqrt(pow(abs(R - r), 2) + pow(h, 2));
        cout << l;
        double V = 1.0/3*M_PI*h*(R*R + R*r + r*r);
        double S = M_PI*(R*R + (R+r)*l + r*r);
        cout << "Volume equals " << V << " and square equals " << S << endl;
    }
    else {
        if (R <= 0 || r <= 0) cout << "Error: radius is lower or equals 0\n";
        if (h <= 0) cout << "Error: height is lower or equals 0\n";
    }
    return 0;
}
 */