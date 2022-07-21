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
void inp(){
	cin>>n;
}

void out(){
	long double ans = 0;
	for (int i = 1; i<=n/4; i+=4){
		ans += (long double)1/(i*(i+1)) + (long double)1/((i+2)*(i+1)) + (long double)1/((i+3)*(i+2)) + (long double)1/((i+3)*(i+4));
	}
	for (int i = 1; i<=n%4; i++){
		ans += (long double)1/((n/4*4 + i) * (n/4*4 + i + 1));
	}
	cout<<ans;
}
int main(){
    FASTINPUT();
    inp();
    out();
}