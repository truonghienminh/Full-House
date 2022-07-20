#include <iostream>
#include <string>
using namespace std;

int main(){
    int count[255] = {0};
    string a, b;
    getline(cin, a);
    getline(cin, b);
    for (int i = 0; i < a.length(); i++){
        count[a[i]] = 1;
    }
    for (int i = 0; i < b.length(); i++){
        if (count[b[i]])
            count[b[i]] = 2;
    }
    for (int i = 0; i < 255; i++){
        if (count[i] == 2)
            cout << (char)i;
    }
    return 0;
}