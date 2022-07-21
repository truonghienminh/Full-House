#include <bits/stdc++.h>
using namespace std;

#define NMAX 10001

void FASTINPUT(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

typedef long long ll;
typedef unsigned long long ull;
int m, n;
int dem = 0;
vector<int> adj[1001];
bool visited[1001];
vector<int> q[1001];

void inp(){
	cin >> m >> n;
	for (int i = 1; i <= n; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}

void dfs(int u){
	q[dem].push_back(u);
	visited[u] = true;
	for (auto x : adj[u]){
		if (!visited[x]){
			dfs(x);
		}
	}
}

void out(){

	for (int i = 1; i <= m; i++){
		if (!visited[i]){
			dfs(i);
			dem++;
		}
	}
	cout << dem << '\n';
	for (int i = 0; i < dem; i++){
		cout << q[i].size() << " ";
		sort(q[i].begin(), q[i].end());
		for (auto x : q[i])
			cout << x << ' ';
		cout << endl;
	}
}

int main(){
	FASTINPUT();
	inp();
	out();
}