#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
typedef long long ll;
typedef unsigned long long ull;
ll a, b;
void inp(){
    cin>>a>>b;
}
void out(){
    if (a%b==0) cout<<a;
    else
    cout<<(a/b + 1)*b;
}
int main(){
    FASTINPUT();
    inp();
    out();
}