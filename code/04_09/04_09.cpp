#include <iostream>
using namespace std;

int solve(int64_t n){
    int count = 0;
    while (n > 0){
        count++;
        n /= 10;
    }
    return count;
}

int main(){
    int64_t n;
    cin >> n;
    cout << solve(n);
    return 0;
}