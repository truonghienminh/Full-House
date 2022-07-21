#include <bits/stdc++.h>
using namespace std;
int gt[10000];
unsigned long long m,n,a = 0,b = 0, len = 1;
void expo(int x, int y){
	memset(gt, 0,10000*4);
	gt[0] = 1;
	unsigned long long i,j,temp = 0;
	for (i = 1; i<=y; i++)
	{
		for (j = 0; j<len || temp != 0; j++)
		{
			temp += (gt[j]) * x;
			gt[j] = temp%10;
			temp /= 10;
		}
		len = j;
	}
}
void out(){
	for (int i = len - 1; i>=0; i--) cout<<gt[i];
}
int main(){
	long long n; cin>>n;
	long long x; cin>>x;
	expo(n,x);
	out();
	return 0;
}