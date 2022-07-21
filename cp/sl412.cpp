#include <bits/stdc++.h>
using namespace std;

#define NMAX 10001
#define MOD 1000000007

void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

typedef long long ll;
typedef unsigned long long ull;
long long m;

pair<long long, long long> fibo(long long n){
    if (n == 0)
        return {0, 1};
    auto p = fibo(n >> 1);
    long long c = (p.first * (2 * p.second - p.first));
    long long d = (p.first * p.first + p.second * p.second);
    if (n & 1)
        return {d % MOD, (c % MOD + d) % MOD};
    return {c % MOD, d % MOD};
}

void inp(){
    cin >> m;
}

void out(){

    auto ans = fibo(m);
    cout << ans.second << '\n';
}

int main(){
    FASTINPUT();
    inp();
    out();
}