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

ll n, total = 0, even = 0, feven = 0;
bool flag = 0;
void inp(){
	cin>>n;
	for (int i = 0; i<n; i++){
		int x; cin>>x;
		total += x;
		if (x > 0) even++;
		if (x%2 == 0 && flag == 0){
			flag = 1;
			feven = x;
		}
	}
}
void out(){
	cout<<total<<" "<<even<<" "<<feven;
}
int main(){
    FASTINPUT();
    inp();
    out();
}