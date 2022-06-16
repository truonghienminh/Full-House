#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long a, b;
    cin >> a >> b;
    if (__gcd(a, b) == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
