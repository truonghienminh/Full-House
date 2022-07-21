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
int n, a[100001];
map<int, int> m;
void inp(){
	cin>>n;
	for (int i = 0; i<n; i++){
		cin>>a[i];
		m[a[i]] ++;
	}
}
void out(){
	cout<<m.size()<<'\n';
	for (int i = 0; i<n; i++){
		if (m[a[i]] != 0){
			cout<<a[i]<<" "<<m[a[i]]<<endl;
			m[a[i]] = 0;
		}
	}
}
int main(){
    FASTINPUT();
    inp();
    out();
}