#include <iostream>
#include <math.h>
using namespace std;

bool check(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

int solve(int n){
    int count = 0;
    for (int i = 2; i <= n; i++){
        if (n % i == 0 && check(i))
            count++;
    }
    return count;
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
