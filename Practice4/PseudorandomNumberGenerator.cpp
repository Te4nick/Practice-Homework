/*
#include <iostream>
using namespace std;

int pseurand(int m, int i, int c) {
    int s;
    if (i == 0) s = 0;
    else s = (m*pseurand(m, i-1, c) + i-1) % c;
    return s;
}

int main() {
    int m, i, c;
    cin >> m >> i >> c;
    if (c != 0) cout << pseurand(m, i, c);
    else cout << "Error: division by zero!";
    return 0;
}
*/