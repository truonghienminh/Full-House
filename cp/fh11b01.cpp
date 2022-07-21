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
int n;
vector<int> v;
void inp(){
	cin>>n;
	for (int i = 0; i<n; i++){
		int x; cin>>x;
		v.push_back(x);
	}
}
void out(){
	sort(v.begin(), v.end(), greater<int>());
	cout<<v[0]<<endl<<v[1];
}
int main(){
    FASTINPUT();
    inp();
    out();
}