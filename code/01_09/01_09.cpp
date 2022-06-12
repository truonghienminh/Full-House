#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, sum = 0;
    cin >> n;
    n = abs(n);
    for (int i = 1; i <= n; i++){
        sum += pow(i, 2);
    }
    cout << sum;
    return 0;
}
