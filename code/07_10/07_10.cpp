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
    string s;
    cin >> s;
    if (pangram(s))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}