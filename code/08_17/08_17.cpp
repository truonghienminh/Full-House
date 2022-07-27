#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s1;
    getline(cin, s1);
    string s2;
    getline(cin, s2);
    map<string, int> mp;
    vector<string> v;
    stringstream ss1(s1), ss2(s2);
    string tmp;
    while (ss1 >> tmp){
        v.push_back(tmp);
        mp[tmp] = 1;
    }
    while (ss2 >> tmp){
        mp[tmp]++;
    }
    sort(v.begin(), v.end());
    for (auto x : v){
        if (mp[x] == 1)
            cout << x << " ";
        mp[x] = 0;
    }
    return 0;
}