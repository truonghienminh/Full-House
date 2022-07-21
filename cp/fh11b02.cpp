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
bool snt[100001];
void era(){
	snt[0] = snt[1] = 1;
    for (int i = 2; i <= NMAX ;i++){
        if (!snt[i]) 
            for (int j = 2*i; j<=NMAX; j+=i){
                snt[j] = 1;
            }
    }
}
int n;
void inp(){
	era();
	cin>>n;
}
void out(){
	int dem = 0;
	for (int i = 0; i<n; i++){
		int x; cin>>x;
		if (!snt[x]) dem++;	
	}
	cout<<dem;
}
int main(){
    FASTINPUT();
    inp();
    out();
}