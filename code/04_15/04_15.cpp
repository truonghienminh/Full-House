#include <iostream>
#include <iomanip>
using namespace std;

double solve(int32_t n){
    double sum = 0;
    for (int i = 1; i <= n; i++){
        sum += 1.0/i;
    }
    return sum;
}

int main(){
    int32_t n;
    cin >> n;
    cout << fixed << setprecision(2) << solve(n);
    return 0;
}