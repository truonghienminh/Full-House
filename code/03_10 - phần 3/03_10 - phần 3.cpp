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

bool check2(int n){
    while (n >= 10){
        int t = n % 10;
        if (t <= (n/10)%10)
            return false;
        n /= 10;
    }
    return true;
}

bool check3(int n){
    while (n >= 10){
        int t = n % 10;
        if (t >= (n/10)%10)
            return false;
        n /= 10;
    }
    return true;
}

int main(){
    int n, count = 0;
    cin >> n;
    for (int i = pow(10, n-1); i < pow(10, n); i++){
        if (check1(i) && (check2(i) || check3(i)))
            count++;
    }
    cout << count;
    return 0;
}
