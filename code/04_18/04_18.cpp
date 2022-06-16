#include <iostream>
using namespace std;

bool check(int n){
    while (n > 0){
        if ((n % 10) % 2 != 0)
            return false;
        n /= 10;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if (check(n))
        cout << 1;
    else
        cout << 0;
    return 0;
}
