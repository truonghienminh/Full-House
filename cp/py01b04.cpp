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
long long a, b;

void inp(){
    cin >> a >> b;
}

void out(){
    cout << a + b << " " << a - b << " " << a * b << " ";
    cout << fixed << setprecision(2) << (float)a / b;
}

int main(){
    FASTINPUT();
    inp();
    out();
}