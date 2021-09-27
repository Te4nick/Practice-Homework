/*
#include <iostream>
using namespace std;

int pseurand(int m, int i, int c) {
    int s = 0;
    if (i == 0) s = 0;
    else s = (m*pseurand(m, i-1, c) + i-1) % c;
    return s;
}

int main() {
    int mode;
    cin >> mode;
    try {
        if (mode == 1) cout << pseurand(37, 3+1, 64);
        else if (mode == 2) cout << pseurand(25173, 13849+1, 65537);
        else throw 1;
    }
    catch (int x) {
        cout << "Wrong variant number!\n";
    }
    return 0;
}
*/