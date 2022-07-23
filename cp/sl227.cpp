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
int a[10000001], n, q;
void inp(){
	cin>>n>>q;
	
	for (int i = 1; i<=q; i++){
		int l, r, x;
		cin>>l>>r>>x;
		a[l] += x;
		a[r + 1] -= x;
	}
}
void out(){
	long long tmp = 0, ans = 0;
	for (int i = 0; i<=n; i++){
		tmp += a[i];
		ans = max(ans, tmp);
	}
	cout<<ans;
}
int main(){
    FASTINPUT();
    inp();
    out();
}