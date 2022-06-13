#include <iostream>
using namespace std;

int main(){
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z')
        cout << "YES";
    else
        cout << "NO";
    return 0;
}