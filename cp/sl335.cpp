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
int main(){
    string n;
    while (cin>>n){
    	if (n[0] == n[n.length() - 1]) cout<<"YES";
    	else cout<<"NO";
    	cout<<endl;
    }
}