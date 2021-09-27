#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string getString(){
    srand(time(0));
    string s(30, '0'), dict = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
    for (int i = 0; i < 30; ++i) {
        s[i] = dict[rand() % 52];
    }
    return s;
}

int main() {

    string s = getString(), sorted, dict = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
    int c[52];
    cout << s << endl;
    for (int i = 0; i < 52; i++)
    {
        c[i] = 0;
    }
    for (int i = 0; i < 30; i++)
    {
        c[dict.find(s[i])] += 1;
    }
    for (int i = 0; i < 52; i++)
    {
        for (int j = 0; j < c[i]; j++)
        {
            sorted += dict[i];
        }
    }
    cout << sorted << endl;
    return 0;

}