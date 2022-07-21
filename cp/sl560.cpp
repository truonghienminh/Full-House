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
int m,n;
vector<int> adj[101];
bool visited[101];
void inp(){
	cin>>m>>n;
	for (int i = 1; i<=n; i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}
void dfs(int u){
	cout<<u<<endl;
	visited[u] = true;
	for (auto x : adj[u]){
		if (!visited[x]) dfs(x);
	}
}
void out(){
	for (int i = 1;i<=m;i++){
	if (!visited[i])
		dfs(i);
	}
}
int main(){
    FASTINPUT();
    inp();
    out();
}