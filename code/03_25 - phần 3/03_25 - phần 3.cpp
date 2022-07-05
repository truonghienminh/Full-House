#include <iostream>
#include <math.h>
using namespace std;

int solve(int n, int k){
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            while (n % i == 0){
                n /= i;
                ++count;
                if (count == k) return i;
            }
        }
    }
    if (n != 1)
        ++count;
    if (count == k) return n;
    return -1;
}

int main(){
    int n, k;
    cin >> n >> k;
    cout << solve(n, k);    
    return 0;
}