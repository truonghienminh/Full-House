#include <iostream>
using namespace std;

int main(){
    long long n, total = 0;
    cin >> n;
    if (n & 1){
        total = -n / 2 - 1;
    }
    else
        total = n / 2;
    cout << total;
}