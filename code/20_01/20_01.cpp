#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

int main(){
    ll a, b;
    cin >> a >> b;
    if (b < 0){
        a = -a;
        b = -b;
    }
    for (int i = 1; i <= a, i <= b; i++){
        if (abs(a) % i == 0 && abs(b) % i == 0){
            a /= i;
            b /= i;
        }
    }
    cout << a << "/" << b;
    return 0;
}