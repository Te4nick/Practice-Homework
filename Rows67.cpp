#include <iostream>
#include <vector>
using namespace std;

vector<int> getBinaries(int n);

vector<int> recognize(int x, int base) {
    vector<int> nums;
    while (x > 0) {
        nums.push_back(x % base);
        x/=base;
    }
    reverse(nums.begin(), nums.end());
    return nums;
}

int to10(const vector<int>& x) {
    int result = 0;
    int degree = x.size()-1;
    for (int i : x) {
        result = result + i * pow(2, degree);
        --degree;
    }
    return result;
}

int toBase(int x, int base) {
    int result = 0;
    vector<int> nums = recognize(x, base);
    int degree = nums.size()-1;
    for (int i : nums) {
        result = result + i * pow(10, degree);
        --degree;
    }
    return result;
}

void printVector(const vector<int>& vec) {
    for (int i : vec) {
        cout << i << ' ';
    }
    cout << endl;
}

bool checkBinary(int n) {
    while (n > 0) {
        if (n % 10 > 1) {
            return false;
        }
        n /= 10;
    }
    return true;
}

bool checkBase(int n) {
    if (n < 3 || n > 6) {
        cout << "Invalid destination base value!\n";
        return false;
    }
    return true;
}

int main() {
    int n, base;
    vector<int> binaries, based;
    cout << "Enter array length (n):";
    cin >> n;
    //input operations
    binaries = getBinaries(n);
    cout << "Enter destination base:";
    cin >> base;
    if (binaries[0] != -1 && checkBase(base)) {
        //casting to user-defined base
        for (int i: binaries) {
            based.push_back(toBase(to10(recognize(i, 10)), base));
        }

        //printVector(binaries);
        printVector(based);

    }
    return 0;
}

vector<int> getBinaries(int n) {
    vector<int> input_vector;
    int a;
    for (int i = 0; i < n; ++i) {
        cout << "#" << (i+1) << " binary number =";
        cin >> a;
        if (checkBinary(a)) {
            input_vector.push_back(a);
        } else {
            cout << "Invalid binary number!\n";
            input_vector.erase(input_vector.begin(), input_vector.end());
            input_vector.push_back(-1);
            break;
        }

    }
    cout << endl;
    return input_vector;
}
