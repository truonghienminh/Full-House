#include <iostream>
#include <cmath>
using namespace std;

bool nt(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

bool check(long long n){
    for (int i = 1; i <= 32; i++){
        if (nt(i)){
            int tmp = (int)pow(2, i) - 1;
            if (nt(tmp)){
                long long hh = 1ll*tmp * (int)pow(2, i - 1);
                if (hh == n)
                    return true;
            }
        }
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
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
