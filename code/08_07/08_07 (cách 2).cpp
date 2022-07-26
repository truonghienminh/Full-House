#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

string fix(string s){
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.length(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    return s;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<string> v;
        string tmp;
        while (ss >> tmp){
            v.push_back(fix(tmp));
        }
        for (auto x : v){
            cout << x << " ";
        }
        cout << '\n';
    }
    return 0;
}