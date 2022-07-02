#include <iostream>
using namespace std;

bool check(int64_t n){
    while (n > 0){
        if (n % 2 == 0)
            return false;
        n /= 10;
    }
    return true;
}

int main(){
    int64_t n;
    cin >> n;
    if (check(n))
        cout << 1;
    else
        cout << 0;
    return 0;
}
