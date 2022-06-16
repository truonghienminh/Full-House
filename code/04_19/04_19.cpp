#include <iostream>
using namespace std;

int main(){
    int64_t n, sum =0;
    cin >> n;
    while (n > 0){
        int temp = n % 10;
        if (temp % 2 == 0)
            sum += temp;
        n /= 10;
    }
    cout << sum;
    return 0;
}