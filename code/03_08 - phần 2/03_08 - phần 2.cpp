#include <iostream>
#include <cmath>
using namespace std;

int solve(int n){
    int res = 0;
    for (int i = 2; i <= sqrt(n); i++){
        while (n % i == 0){
            res = i;
            n /= i;
        }
    }
    if (n != 1) res = n;
    return res;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}