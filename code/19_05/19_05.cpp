#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define ll long long
ll med;
map<string, ll> m;

void backtrack(ll n, vector<ll> v, ll l, ll r, string s){
    if (l != r && n == v.size())
        return;
    if (n > v.size())
        return;
    if (l == r && n == v.size()){
        m[s]++;
        return;
    }
    backtrack(n + 1, v, l + v[n], r, s + '1');
    backtrack(n + 1, v, l, r + v[n], s + '2');
}

class Solution{
public:
    inline void FIO(){
        cin.tie(0)->ios::sync_with_stdio(false);
    }

private:
    // declare variable;
    ll n;
    vector<ll> v;
    string s;

public:
    // handle
    void input(){
        cin >> n;
        for (ll i = 0; i < n; i++){
            ll x;
            cin >> x;
            v.push_back(x);
            med += x;
        }
        med /= 2;
    }
    void solve(){
        backtrack(0, v, 0, 0, s);
    }
    void output(){
        if (m.empty())
            cout << -1;
        else{
            for (auto x : m){
                cout << x.first << "\n";
            }
        }
    }
};

int main(){
    Solution sol;
    sol.FIO();
    sol.input();
    sol.solve();
    sol.output();
    return 0;
}