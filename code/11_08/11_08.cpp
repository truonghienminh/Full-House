#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        map<string, int> mp;
        while (ss >> tmp){
            mp[tmp]++;
        }
        string res;
        int fre = 0;
        for (auto it : mp){
            if (it.second > fre){
                fre = it.second;
                res = it.first;
            }
        }
        cout << res << endl;
    }
    return 0;
}