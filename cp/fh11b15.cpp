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
ll n, gcd;
void inp(){
	cin>>n;
	cin>>gcd;
}
void out(){
	for (int i = 1; i<n; i++){
		long long x; cin>>x;
		gcd = __gcd(gcd, x);
	}
	cout<<gcd;
}
int main(){
    FASTINPUT();
    inp();
    out();
}