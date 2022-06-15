#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    double sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        sum += 1.0/(2*i);
    }
    cout << fixed << setprecision(2) << sum;
    return 0;
}