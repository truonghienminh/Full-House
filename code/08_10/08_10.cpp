#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

char Correct(string s){
    if (s[0] >= 'A' && s[0] <= 'Z')
        s[0] += 32;
    return s[0];
}

string Correct2(string s){
    for (int i = 0; i < s.length(); i++){
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
            v.push_back(tmp);
        }
        for (int i = 0; i < v.size() - 1; i++){
            v[i] = Correct(v[i]);
        }
        cout << Correct2(v[v.size() - 1]);
        for (int i = 0; i < v.size() - 1; i++){
            cout << v[i];
        }
        cout << "@gmail.com\n";
    }
    return 0;
}