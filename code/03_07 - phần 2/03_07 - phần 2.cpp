#include <iostream>
#include <cmath>
using namespace std;

int sum(int n){
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool check(int n){
    int tmp = n, sum1 = sum(n), sum2 = 0;
    for (int i = 2; i <= sqrt(n); i++){
        while (n % i == 0){
            sum2 += sum(i);
            n /= i;
        }
    }
    if (tmp == n) return false;
    if (n != 1) sum2 += sum(n);
    return sum1 == sum2;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if (check(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
