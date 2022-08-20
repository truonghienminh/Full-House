#include <iostream>
#include <set>
using namespace std;

bool pangram(string s){
    set<char> se;
    for (char c : s){
        se.insert(c);
    }
    return se.size() == 26;
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