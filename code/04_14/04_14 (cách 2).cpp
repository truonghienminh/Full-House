#include <iostream>
using namespace std;

typedef long long ll;

void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

ll sol(ll n){
    if (n == 1)
        return -1;
    if (n & 1){
        if (n / 2 & 1)
            return -(n / 4 + 1) + sol(n / 2);
        else
            return -n + n / 4 + sol(n / 2);
    }
    else{
        if (n / 2 & 1)
            return n - n / 4 + sol(n / 2);
        else
            return n / 4 + sol(n / 2);
    }
}

int main(){
    FASTINPUT();
    ll n;
    cin >> n;
    cout << sol(n);
    return 0;
}