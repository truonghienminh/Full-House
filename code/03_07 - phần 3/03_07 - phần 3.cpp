#include <iostream>
#include <cmath>
using namespace std;

bool check(long long n){
    int a = sqrt(n);
    if (1ll * a * a == n) return true;
    return false;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        if (check(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
