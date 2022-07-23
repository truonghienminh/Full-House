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
long long a, b;
int main(){
    //FASTINPUT();
    while (cin>>b>>a){
    	int m[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    	int mn[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
    	if (b<1||b>12){
    		cout<<"INVALID";
    	}
    	else{
    		if (a%4==0){
    			if (a%400==0) cout<<mn[b];
    			else if (a%100==0) cout<<m[b];
    			else cout<<mn[b];
    		}
    		else if (a>=0) cout<<m[b];
    		else cout<<"INVALID";
    	}
    	cout<<endl;
    }
}