#include <iostream>
using namespace std;

int main(){
    char c;
    cin >> c;
    if (c >= 'a' && c < 'z'){
        c += 1;
        cout << c;
    }
    else if (c >= 'A' && c < 'Z'){
        c += 33;
        cout << c;
    }
    else if (c == 'z' || c == 'Z')
        cout << 'a';
    else
        cout << "INVALID";
    return 0;
}