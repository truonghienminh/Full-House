#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i += 2){
            cout << string(s[i+1] - '0', s[i]);
        }
        cout << '\n';
    }
    return 0;
}
