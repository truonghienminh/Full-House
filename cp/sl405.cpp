#include<iostream>
using namespace std;
#define MOD 1000000007

long long lt(int n, int m){
	if (m == 0) return 1;
	if (m == 1) return n;
	if (m & 1) return (lt(n, m/2)%MOD*lt(n,m/2)%MOD*n%MOD)%MOD;
	else return (lt(n, m/2)%MOD*lt(n,m/2)%MOD)%MOD;
}

int main(){
	long long n, m;
	cin>>n>>m;
	cout<<lt(n, m);
}