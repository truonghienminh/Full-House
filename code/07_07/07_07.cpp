#include <iostream>
#include <map>
using namespace std;

int main(){
    map<char, int> mp1, mp2;
    string n, m;
    getline(cin, n);
    getline(cin, m);
    for (int i = 0; i < n.length(); i++){
        mp1[n[i]]++;
    }
    for (int i = 0; i < m.length(); i++){
        mp2[m[i]]++;
    }
    for (auto x : mp1){
        if (mp2[x.first] > 0 && x.second > 0)
            cout << x.first;
    }
    return 0;
}
