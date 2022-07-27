#include <iostream>
#include <sstream>
#include <map>
#include <vector>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    vector<string> v;
    map<string, int> mp;
    stringstream ss(s);
    string tmp;
    while (ss >> tmp){
        v.push_back(tmp);
        mp[tmp]++;
    }
    for (auto x : v){
        if (mp[x])
            cout << x << " ";
        mp[x] = 0;
    }
    return 0;
}