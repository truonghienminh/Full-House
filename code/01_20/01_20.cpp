#include <iostream>
using namespace std;

int main(){
    char c;
    cin >> c;
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}