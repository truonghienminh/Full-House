#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    cout << __gcd(a, b) << " " << (a * b) / __gcd(a , b);
    return 0;
}