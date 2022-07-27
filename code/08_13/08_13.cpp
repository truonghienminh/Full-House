#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    stringstream ss(s);
    map<string, int> mp;
    vector<string> v;
    string temp;
    while (ss >> temp){
        mp[temp]++;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++){
        if (mp[v[i]])
            cout << v[i] << " " << mp[v[i]] << endl;
        mp[v[i]] = 0;
    }
    return 0;
}