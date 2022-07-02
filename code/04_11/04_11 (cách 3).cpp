#include <iostream>
using namespace std;

int64_t reverse(int64_t n){
    int64_t ans = 0;
    while (n > 0){
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}

int main(){
    int64_t n;
    cin >> n;
    cout << reverse(n);
    return 0;
}