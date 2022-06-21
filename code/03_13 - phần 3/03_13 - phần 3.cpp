#include <iostream>
#include <math.h>
using namespace std;

bool check1(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

bool check(int n){
    if (n == 0 || n == 1) return 1;
    int fn2 = 0, fn1 = 1;
    for (int i = 0; i < 100; i++){
        int fn = fn2 + fn1;
        if (fn == n)
            return true;
        fn2 = fn1;
        fn1 = fn;
    }
    return false;
}

bool check2(int n){
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    if (check(sum)) return true;
    return false;
}

int main(){
    int a, b, count = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        if (check1(i) && check2(i)){
            cout << i << " ";
            count++;
        }
    }
    if (count == 0)
        cout << -1;
    return 0;
}