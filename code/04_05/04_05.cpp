#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define i6 int64_t

void eea(ll a, ll b, ll &x, ll &y){
    if (a == 1){
        x = 1;
        y = 0;
        return;
    }
    ll x1, y1;
    eea(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
}

long long mod(ll a, ll m){
    if (__gcd(a, m) != 1)
        return -1;
    ll x, y;
    eea(a, m, x, y);
    x = (x % m + m) % m;
    return x;
}

int main(){
    ll x, a, m;
    cin >> a >> m;
    x = mod(a, m);
    cout << x;
    return 0;
}