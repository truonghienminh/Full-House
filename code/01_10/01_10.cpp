#include <bits/stdc++.h>

using namespace std;

int main() {
    long double n, sum = 0;
    cin >> n;
    n = abs(n);
    for (int i = 1; i < n; i++){
        sum += 1 / (i*(i+1));
    }
    cout << fixed << setprecision(2) << sum;
    return 0;
}
