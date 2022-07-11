#include <iostream>
#include <map>
using namespace std;

int main(){
    int n, m;
    map<int, int> mp;
    cin >> n >> m;
    while (n + m--){
        int x;
        cin >> x;
        mp[x]++;
    }
    for (auto x : mp){
        cout << x.first << " ";
    }
    cout << endl;
    for (auto x : mp){
        if (x.second > 1)
            cout << x.first << " ";
    }
    return 0;
}