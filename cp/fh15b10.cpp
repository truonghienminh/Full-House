#include<bits/stdc++.h>
using namespace std;
#define NMAX 1001
void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
typedef long long ll;
typedef unsigned long long ull;
int n, a[NMAX][NMAX], res = 0, f[10001];
void initfibo(){
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i<10001; i++){
		f[i] = f[i-1]+f[i-2];
	}
}
void inp(){
	for (int i = 0; i<1000; i++) a[0][i] = 1;
	initfibo();
	cin>>n;
}
void loang(int x, int y){
	if (x == 1 && y == 1) a[x][y] = 100;
	else
	a[x][y] = f[res];
	res++;
	if (a[x][y+1] == 0 && x>=1 && x<=n&& y+1>=1 && y+1<=n && a[x-1][y] != 0) loang(x, y+1);
	if (a[x+1][y] == 0 && x+1>=1 && x+1<=n&& y>=1 && y<=n) loang(x+1, y);
	if (a[x][y-1] == 0 && x>=1 && x<=n&& y-1>=1 && y-1<=n) loang(x, y-1);
	if (a[x-1][y] == 0 && x-1>=1 && x-1<=n&& y>=1 && y<=n) loang(x-1, y);
}
void out(){
	loang(1,1);
	a[1][1] = 0;
	for (int i = 1; i<=n; i++){
		for (int j = 1; j<=n; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
int main(){
    FASTINPUT();
    inp();
    out();
}