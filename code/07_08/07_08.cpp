#include <iostream>
#include <string>
using namespace std;

int main(){
    int count[255] = {0};
    string a, b;
    getline(cin, a);
    getline(cin, b);
    for (int i = 0; i < a.length(); i++){
        count[a[i]]++;
    }
    for (int i = 0; i < b.length(); i++){
        if (count[b[i]])
            count[b[i]] = 0;
    }
    for (int i = (int)'A'; i <= (int)'z'; i++){
        if (count[i])
            cout << (char)i;
    }
    return 0;
}