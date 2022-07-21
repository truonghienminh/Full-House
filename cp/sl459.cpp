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
string s;

void inp(){
    getline(cin, s);
}

void out(){
    int dem = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == ' ')
            dem++;
    }
    cout << dem;
}

int main(){
    FASTINPUT();
    inp();
    out();
}