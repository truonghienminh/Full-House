#include <iostream>
using namespace std;
#define NMAX 10001
#define MODULO 1000000007
#define FASTINPUT();    ios::sync_with_stdio(0); \
                        cin.tie(0);              \
                        cout.tie(0);             
typedef long long ll;
typedef unsigned long long ull;
ull a, b;

void inp(){
    cin >> a >> b;
}

ull sqr(ull x){
    return x * x;
}

ull sol(ull a, ull b){
    if (b == 0)
        return 1 % MODULO;
    else if (b % 2 == 0)
        return sqr(sol(a, b / 2)) % MODULO;
    else
        return a * (sqr(sol(a, b / 2)) % MODULO) % MODULO;
}

void out(){
    cout << sol(a, b);
}

int main(){
    FASTINPUT();
    inp();
    out();
    return 0;
}