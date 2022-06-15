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

int main(){
    long long n;
    cin >> n;
    int count = 0;
    while (n > 0){
        long long temp = n % 10;
        if (check(temp))
            count++;
        n /= 10;
    }
    cout << count;
    return 0;
}
