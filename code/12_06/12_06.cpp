#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long

int main(){
    ll n, a, b, max = 1;
    cin >> n;
    vector<pair<ll, ll>> v;
    while (n--){
        cin >> a >> b;
        v.push_back({b, a});
    }
    sort(v.begin(), v.end());
    ll res = v[0].first;
    for (auto it = v.begin(); it != v.end(); it++){
        if ((*it).second >= res){
            max++;
            res = (*it).first;
        }
    }
    cout << max;
    return 0;
}