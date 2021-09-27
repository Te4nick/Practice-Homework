#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> recognize(vector<char> x) {
    // creating num array
    vector<int> nums[1];
    for (int i = 0; i < 36; ++i) {
        nums->push_back(i);
    }
    //create char array
    vector<char> letters[1];
    for (char i = 48; i < 58; ++i) {
        letters->push_back(i);
    }
    for (char i = 65; i < 91; ++i) {
        letters->push_back(i);
    }
    //turn char to int
    vector<int> result;
    for (char i : x) {
        for (int j = 0; j < 36; ++j) {
            if (i == letters->at(j)) result.push_back(nums->at(j));
        }
    }
    return reinterpret_cast<const vector<int> &>(result);
}

int to10(vector<int> x, int base) {
    int result = 0;
    int degree = x.size()-1;
    for (int i : x) {
        result = result + i * pow(base, degree);
        --degree;
    }
    return result;
}

int toBase(int x, int base) {
    int result = 0;
    vector<int> b;
    while (x > 0) {
        b.insert(b.cbegin(),1, x%base);
        x /= base;
    }
    int degree = b.size()-1;
    for (int i : b) {
        result = result + i * pow(10, degree);
        --degree;
    }
    return result;
}

vector<int> transform(string x){
    vector<char> a;
    // split number
    for (char i : x) {
        a.push_back(i);
    }

    // turn char to int
    vector<int> b;
    b = recognize(a);
    return b;
}

bool checkSystems(int s_from, int s_to){
    if (s_from < 2 || s_from > 36) {
        cout << "Incorrect base system\n";
        return false;
    }
    if (s_to < 2 || s_to > 36) {
        cout << "Incorrect end system\n";
        return false;
    }
    return true;
}

bool checkDigits(vector<int> a, int base) {
    if (any_of(a.cbegin(), a.cend(), [&base](int i){ return i > base; })) return false;
    return true;
}

bool checkNegative(string x) {
    if (x[0] == '-') return true;
    else return false;
}

int main() {
    string num;
    int sys_from, sys_to;
    cin >> num >> sys_from >> sys_to;
    // check systems
    if (checkSystems(sys_from, sys_to)){

        // check if number is negative
        bool negative = checkNegative(num);

        // cast string expression to array of digits
        vector<int> num_ar = transform(num);

        // check that all digits < base system
        if (checkDigits(num_ar, sys_from)) {

            // cast to base=10
            int num10 = to10(num_ar, sys_from);

            // cast to user base & print
            if (sys_to == 10){
                // cast to negative if needed
                if (negative) num10 = 0 - num10;
                cout << num10;
            }
            else{
                // cast to user base
                int num_based = toBase(num10, sys_to);
                // cast to negative if needed
                if (negative) num_based = 0 - num_based;
                cout << num_based << endl;
            }
        }
        else cout << "Error occurred! Digits are greater than base value!\n";
    }
    else cout << "Error occurred!\n";
    return 0;
}