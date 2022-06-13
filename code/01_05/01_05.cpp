#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14;

int main(){
    int n;
    cin >> n;
    cout << fixed << setprecision(2) << 2*PI*n << " " << PI*n*n;
    return 0;
}
