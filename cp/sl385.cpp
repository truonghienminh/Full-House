#include<bits/stdc++.h>
using namespace std;
#define NMAX 1001
string m,n;
char a[NMAX], b[NMAX], c[NMAX], temp[NMAX];
void nhap(){
	cin>>m>>n;
	memset(a, '0', NMAX);
	memset(b, '0', NMAX);
	memset(c, '0', NMAX);
	memset(temp, '0', NMAX);
	for (int i = m.length(); i>0; i--){
		a[m.length() - i] = m[i-1];
	}
	for (int i = n.length(); i>0; i--){
		b[n.length() - i] = n[i-1];
	}
}
int charlen(char x[]){
	int temp;
	for (int i = NMAX - 1; i>=0;i--){
		if (x[i] != '0'){
		temp = i;
		break;
		}
	}
	if (temp == 32767) return 0;
	else return temp+1;
}
void mul1(char x[], int y, int z){
	int sodu = 0, d, i = 0;
	int cnt1 = charlen(a);
	while (cnt1>0||sodu!=0){
		d = (x[i]-'0')*(y)+sodu;
		sodu = d/10;
		while (d>=10){
			d%=10;
		}
		c[z] = d+'0';
		cnt1--;i++;z++;
	}
}
void mul2(char x[], int y, int z){
	int sodu = 0, d, i = 0;
	int cnt1 = charlen(a);
	while (cnt1>0||sodu!=0){
		d = (a[i]-'0')*(y)+sodu;
		sodu = d/10;
		while (d>=10){
			d%=10;
		}
		temp[z] = d+'0';
		cnt1--;i++;z++;
	}
}
void add(char x[], char y[]){
	int i = charlen(x), j = charlen(y), sodu = 0, k = 0, d;
	while (j>0 || i>0 || sodu!=0){
		d = x[k]+y[k]-'0'-'0'+sodu;
		sodu = 0;
		while (d>=10){
			d%=10;
			sodu++;
		}
		x[k] = d+'0';
		i--;j--;k++;
	}
}
void xuly(){
	mul1(a,b[0]-'0',0);
	for (int i = 1; i<charlen(b);i++){
		mul2(a, b[i]-'0', i);
		add(c,temp);
		memset(temp, '0', NMAX);
	}

}
void xuat(){
	for (int i = charlen(c) - 1; i>=0;i--){
		cout<<c[i];
	}
}
int main(){
	nhap();
	xuly();
	xuat();
}