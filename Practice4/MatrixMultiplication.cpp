/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    float A[3][4] = {{5, 2, 0, 10}, {3, 5, 2, 5}, {20, 0, 0, 0}};
    float B[4][2] = {{1.20, 0.50}, {2.80, 0.40}, {5.00, 1.00}, {2.00, 1.50}};
    float C[3][2];
    float sum, tax, cur=0;
    for (int i = 0; i < 3; ++i) {
        sum = 0; tax = 0;
        for (int j = 0; j < 4; ++j) {
            sum = sum + A[i][j] * B[j][0];
            tax = tax + A[i][j] * B[j][1];
        }
        C[i][0] = sum; C[i][1] = tax;
    }
    sum=0; tax=0;
    float curMax = max(max(C[0][0]+C[0][1], C[1][0]+C[1][1]), C[2][0]+C[2][1]);
    float curMin = min(min(C[0][0]+C[0][1], C[1][0]+C[1][1]), C[2][0]+C[2][1]);
    float taxMax = max(max(C[0][1], C[1][1]), C[2][1]);
    float taxMin = min(min(C[0][1], C[1][1]), C[2][1]);
    sum = C[0][0] + C[1][0] + C[2][0];
    tax = C[0][1] + C[1][1] + C[2][1];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cur = cur + C[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
        if (curMax == C[i][0]+C[i][1]) curMax = i+1;
        if (curMin == C[i][0]+C[i][1]) curMin = i+1;
        if (taxMax == C[i][1]) taxMax = i+1;
        if (taxMin == C[i][1]) taxMin = i+1;
    }

    cout << "1) max cur " << curMax << ", min cur " << curMin<<endl;
    cout << "2) max tax " << taxMax << ", min tax " << taxMin<<endl;
    cout << "3) all sum " << sum << endl;
    cout << "4) all tax " << tax << endl;
    cout << "5) all cur " << cur << endl;

    return 0;
}
*/