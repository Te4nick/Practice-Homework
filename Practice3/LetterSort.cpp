#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string getString(){
    srand(time(0));
    string s(30, '0'), dict = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < 30; ++i) {
        s[i] = dict[rand() % 26];
    }
    return s;
}

int main() {

    string s = getString(), sorted, dict = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int c[26];
    for (int i = 0; i < 26; i++)
    {
        c[i] = 0;
    }
    for (int i = 0; i < 30; i++)
    {
        c[dict.find(s[i])] += 1;
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < c[i]; j++)
        {
            sorted += dict[i];
        }
    }
    cout << sorted << endl;
    return 0;

}
