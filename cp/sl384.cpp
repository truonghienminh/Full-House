#include <bits/stdc++.h>
using namespace std;
#define NMAX 100001
char a[NMAX],b[NMAX],c[NMAX];
string m,n;
int cnt = 0;
void nhap(){
	cin>>m>>n;
}
void xuly(){
	memset(a, '0', NMAX);
	memset(b, '0', NMAX);
	int i = 0,j = 0,d,temp = 0, k = 0;
	for (int x = m.length()-1;x>=0;x--){
		a[i] = m[x];
		i++;
	}
	for (int x = n.length()-1;x>=0;x--){
		b[j] = n[x];
		j++;
	}
	while (j>0 || i>0 || temp!=0){
		d = a[k]+b[k]-'0'-'0'+temp;
		temp = 0;
		while (d>=10){
			d%=10;
			temp++;
		}
		c[k] = d+'0';
		cnt++;
		i--;j--;k++;
	}
}
void xuat(){
	for (int i = cnt-1; i>=0;i--) cout<<c[i];
}
int main(){
	nhap();
	xuly();
	xuat();
}