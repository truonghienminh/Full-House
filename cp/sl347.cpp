#include <bits/stdc++.h>
using namespace std;

#define NMAX 10001

void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

typedef long long ll;
typedef unsigned long long ull;
map<int, int> m;

void inp(){
    int n;
    cin >> n;
    for (int i = 1; i < n; i++){
        int x;
        cin >> x;
        m[x]++;
    }
}

void out(){
    for (auto x : m)
        if (m)
}

int main(){
    FASTINPUT();
    inp();
    out();
}