#include <iostream>
#include <string>
using namespace std;

int main() {
    int le = 0, chan = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        if ((s[i] - '0') % 2) le++;
        else chan++;
    }
    cout << le << " " << chan;
    return 0;
}