#include <iostream>
using namespace std;

long long F[92];

long long fibo(int n){
    if (F[n] != -1)
        return F[n];
    if (n == 0)
        return F[n] = 0;
    if (n == 1)
        return F[n] = 1;
    F[n] = fibo(n - 1) + fibo(n - 2);
    return F[n];
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++){
        F[i] = -1;
    }
    for (int i = 0; i < n; i++){
        cout << fibo(i) << " ";
    }
    return 0;
}