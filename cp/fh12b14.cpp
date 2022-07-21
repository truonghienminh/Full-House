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
ll n, a[100001];
void inp(){
	cin>>n;
	for (int i = 0; i<n; i++){
		cin>>a[i];
	}
}
void out(){
	bool flag = 0;
	sort(a, a+n);
	for (int i = 0; i<n; i++){
		if (a[i + 1] - a[i] == 1){
			flag = 1;
			break;
		}
	}
	if (flag) cout<<"YES";
	else cout<<"NO";
}
int main(){
    FASTINPUT();
    inp();
    out();
}