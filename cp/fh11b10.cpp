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
vector<pair<int, int>> v;
void inp(){
	cin>>n;
	for (int i = 1; i<=n; i++){
		int x; cin>>x;
		v.push_back({x, i});
	}
}
void out(){
	sort(v.begin(), v.end());
	cout<<v[0].first<<" "<<v[0].second<<'\n';
	cout<<v[1].first<<" "<<v[1].second;
}
int main(){
    FASTINPUT();
    inp();
    out();
}