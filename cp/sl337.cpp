#include<bits/stdc++.h>
using namespace std;
long long a[100], n, m;
void out(){
    a[1] = 9;
    a[2] = 9;
    for (int i = 3; i<20; i+=2){
        a[i] = a[i-2] * 10;
        a[i+1]  = a[i];
    }
}
void inp(){
    out();
    while (cin>>n>>m){
        cout<<a[n] + a[m]<<endl;
    }
}

int main(){
    //freopen("npalin1.inp", "r", stdin);
    inp();
    out();
}