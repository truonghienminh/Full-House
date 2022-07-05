#include <iostream>
using namespace std;

int check(int64_t n){
    if (n == 0) return 1;
    if (n % 2 != 0)
        return check(n/10);
    return 0;
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
