#include <iostream>
using namespace std;

int main(){
    long long n, sum = 0;
    cin >> n;
    for (long long i = 3; i <= n; i++){
        if (i % 3 == 0)
            sum += i;
    }
    cout << sum;
    return 0;
}