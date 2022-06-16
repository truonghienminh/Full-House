#include <iostream>
#include <math.h>
using namespace std;

long long phi(long long n) {
    long long res = n;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            res -= res / i;
        }
    }
    if (n != 1) {
        res -= res / n;
    }
    return res;
}

int main(){
    long long n;
    cin >> n;
    cout << phi(n);
    return 0;
}
