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
long long n;
void inp(){
	cin>>n;
}
void dec2bin(long long a){
	stack<int> st;
	while (a > 0){
		st.push(a%2);
		a/=2;
	}
	while (!st.empty()){
		cout<<st.top();
		st.pop();
	}
	cout<<endl;
}
void out(){
	dec2bin(n);
}
int main(){
    FASTINPUT();
   	int T; cin>>T;
    while (T--){
    inp();
    out();
    }
}