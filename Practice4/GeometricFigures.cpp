/*
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

float rectangleSquare(float width, float height) {
    return width * height;
}

float triangleSquare(float a, float b, float c) {
    float p = (a + b + c) / 2.0;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

float circleSquare(float r) {
    return M_PI * r * r;
}

int main() {
    float h, w, a, b, c, r;
    cout << "Enter rectangle width and height:";
    cin >> w >> h;
    cout << "Enter triangle sides (a , b, c):";
    cin >> a >> b >> c;
    cout << "Enter circle radius:";
    cin >> r;
    cout << "Rectangle square equals " << rectangleSquare(w, h) << endl;
    cout << "Triangle square equals " << triangleSquare(a, b, c) << endl;
    cout << "Rectangle square equals " << circleSquare(r) << endl;
    return 0;
}
*/