#include <iostream>
using namespace std;

bool check(long long n){
    if (n == 0 || n == 1) return 1;
    long long fn2 = 0, fn1 = 1;
    for (int i = 0; i < 100; i++){
        long long fn = fn2 + fn1;
        if (fn == n)
            return true;
        fn2 = fn1;
        fn1 = fn;
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        if (check(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
