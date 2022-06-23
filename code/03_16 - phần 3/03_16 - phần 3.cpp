#include <iostream>
using namespace std;

long long gt(int n){
    long long res = 1;
    for (int i = 1; i <= n; i++){
        res *= i;
    }
    return res;
}

bool check(long long n){
    long long sum = 0;
    long long temp = n;
    while (n > 0){
        sum += gt(n % 10);
        n /= 10;
    }
    if (sum == temp) return true;
    return false;
}

int main(){
    long long a, b;
    bool count = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        if (check(i)){
            cout << i << " ";
            count = 1;
        }
    }
    if (!count)
        cout << -1;
    return 0;
}