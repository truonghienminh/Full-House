#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a, b;
    cin >> a >> b;
    b = floor(b);
    long long c = ceil(a);
    long long d = b;
    cout << d - c + 1;
    return 0;
}