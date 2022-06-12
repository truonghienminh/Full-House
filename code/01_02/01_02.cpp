#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << fixed << setprecision(0) << pow(n, 3) + 3 * pow(n, 2) + n + 1;
    return 0;
}
