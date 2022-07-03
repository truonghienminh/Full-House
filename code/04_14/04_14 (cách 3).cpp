#include <iostream>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;
    ll chan = 0, le = 0;
    if (n % 2 == 0){
        chan = (n + 2) * ((n - 2) / 2 + 1) / 2;
        le = (n - 1 + 1) * ((n - 2) / 2 + 1) / 2;
    }
    else{
        chan = (n + 1) * ((n - 3) / 2 + 1) / 2;
        le = (n + 1) * ((n - 1) / 2 + 1) / 2;
    }
    cout << chan - le;
    return 0;
}