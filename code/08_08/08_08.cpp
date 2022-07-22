#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

string Correct(string s){
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] -= 32;
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
            v.push_back(tmp);
        }
        for (int i = 0; i < v.size(); i++){
            v[i] = Correct(v[i]);
        }
        cout << v[v.size() - 1] << ", ";
        for (int i = 0; i < v.size() - 1; i++){
            cout << v[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}