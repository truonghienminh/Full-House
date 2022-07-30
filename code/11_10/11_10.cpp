#include <iostream>
#include <map>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    map<string, int> mp;
    while (t--){
        string s;
        getline(cin, s);
        if (mp.find(s) == mp.end())
            cout << s;
        else
            cout << s << mp[s];
        mp[s]++;
        cout << '\n';
    }
    return 0;
}