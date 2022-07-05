#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a[4] {0, 0, 0, 0};
    for (char ch: s){
        if (ch == '2') a[0]++;
        else if (ch == '3') a[1]++;
        else if (ch == '5') a[2]++;
        else if (ch == '7') a[3]++;
    }
    if (a[0] != 0)
        cout << "2 " << a[0] << endl;
    if (a[1] != 0)
        cout << "3 " << a[1] << endl;
    if (a[2] != 0)
        cout << "5 " << a[2] << endl;
    if (a[3] != 0)
        cout << "7 " << a[3] << endl;
    return 0;
}
