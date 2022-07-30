#include <iostream>
#include <string>
using namespace std;

bool pangram(string s){
    int c[26] = {};
    for (int i = 0; i < s.length(); i++){
        c[s[i] - 'a'] = 1;
    }
    for (int i = 0; i < 26; i++){
        if (c[i] == 0)
            return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
        if (pangram(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}