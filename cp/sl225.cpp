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
map<int, int> m;
void inp(){
    int n; cin>>n;
    for (int i = 0; i<n; i++){
        int x; cin>>x;
        m[x]++;
    }
}
void out(){
    for (int i = 0; i<100; i++) cout<<m[i]<<" ";
}
int main(){
    FASTINPUT();
    inp();
    out();
}