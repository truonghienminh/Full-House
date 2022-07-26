#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

string to_lower(string s){
    for (int i = 0; i < s.length(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    return s;
}

bool check(string s, string s1){
    if (s == s1)
        return false;
    return true;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 1; i <= t; i++){
        string s, s1;
        getline(cin, s);
        getline(cin, s1);
        stringstream ss(s);
        vector<string> v;
        string tmp;
        while (ss >> tmp){
            if (check(to_lower(tmp), s1))
                v.push_back(tmp);
        }
        cout << "#Test " << i << ": ";
        for (auto x : v){
            cout << x << " ";
        }
        cout << '\n';
    }
    return 0;
}