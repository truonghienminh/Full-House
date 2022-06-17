#include <iostream>
using namespace std;

long long solve(int n){
    long long sum = 0;
    for (long long i = 1; i <= n; i++){
        sum += i*i;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    cout << solve(n);
    return 0;
}