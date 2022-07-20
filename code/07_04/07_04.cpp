#include <iostream>
using namespace std;

#define ll long long

int main(){
    string s;
    getline(cin, s);
    ll a[1001]={};
    for(ll i = 0; i < s.size(); i++){
        a[s[i]]++;
    }
    for(ll i = (ll)'A'; i <= (ll)'z'; i++){
        if(a[i] > 0)
            cout << (char)i << " " << a[i] << '\n';
    }
    return 0;
}
