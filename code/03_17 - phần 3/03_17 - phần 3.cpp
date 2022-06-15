#include <iostream>
using namespace std;

bool check(int n){
    while (n > 0){
        int s = n % 10;
        if (s != 0 && s != 6 && s != 8)
            return false;
        n /= 10;
    }
    return true;
}

int main(){
    long n;
    cin >> n;
    if (check(n))
        cout << 1;
    else
        cout << 0;
    return 0;
}