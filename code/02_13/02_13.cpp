#include <iostream>
using namespace std;

int main(){
    int n;
    long long sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        sum += i*2 - 1;
    }
    cout << sum;
    return 0;
}
