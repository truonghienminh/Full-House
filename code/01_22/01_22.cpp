#include <iostream>
using namespace std;

int main(){
    char c;
    cin >> c;
    if (c >= 'A' && c <= 'Z'){
        c += 32;
    }
    cout << c;
    return 0;
}