#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    long long n;
    double sum = 0;
    cin >> n;
    for (long long i = 1; i <= n; i++){
        sum += 1.0 / (i*(i+1));
    }
    cout << fixed << setprecision(2) << sum;
    return 0;
}   