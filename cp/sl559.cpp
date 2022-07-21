#include <bits/stdc++.h>
using namespace std;
int m,n;
vector<int> adj[101];
bool visited[101];
void nhap(){
	cin>>m>>n;
	for (int i = 1; i<=n; i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}
void bfs(int u){
	cout<<u<<endl;
	visited[u] = true;
	queue<int> q;
	q.push(u);
	while (!q.empty()){
		int v = q.front();
		q.pop();
		for (auto x : adj[v]){
			if (!visited[x]){
				cout<<x<<endl;
				visited[x] = true;
				q.push(x);
				
			}
		}
	}
}
void xuly(){
	for (int i = 1;i<=m;i++){
	if (!visited[i])
	bfs(i);
	}
}
void xuat(){
}
int main(){
	nhap();
	xuly();
	xuat();
}