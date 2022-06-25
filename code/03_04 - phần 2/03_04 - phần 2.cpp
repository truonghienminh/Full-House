#include <iostream>
using namespace std;

int solve(int n, int p){
    int count = 0;
    for (int i = p; i <= n; i += p){
        int temp = i;
        while (temp % p == 0){
            count++;
            temp /= p;
        }
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n, p;
        cin >> n >> p;
        cout << solve(n, p) << endl;
    }
    return 0;
}
