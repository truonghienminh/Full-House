#include <iostream>
#include <string>
using namespace std;

int main(){
    string a, b;
    getline(cin, a);
    getline(cin, b);
    int count[255] = {0};
    for (int i = 0; i < a.length(); i++){
        count[a[i]]++;
    }
    for (int i = 0; i < b.length(); i++){
        count[b[i]]++;
    }
    for (int i = (int)'A'; i <= (int)'z'; i++){
        if (count[i]){
            cout << (char)i;
            count[i] = 0;
        }
    }
    return 0;
}
