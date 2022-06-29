#include <iostream>
using namespace std;

long long gcd(long long a, long long b){
    if (a == 0 || b == 0)
        return a + b;
    while (a != b){
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

long long lcm(long long a, long long b){
    return a * b / gcd(a, b);
}

int main(){
    long long a, b;
    cin >> a >> b;
    cout << gcd(a, b) << " " << lcm(a, b);
    return 0;
}