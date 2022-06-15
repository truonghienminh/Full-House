#include <iostream>
#include <math.h>
using namespace std;

bool check(int n){
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    for (int i = 2; i < sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    long long n;
    cin >> n;
    if (check(n)) cout << "YES";
    else cout << "NO";
    return 0;
}

