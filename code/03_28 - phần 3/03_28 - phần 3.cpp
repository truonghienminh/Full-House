#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

long long lcm(long long a, long long b){
    return (a * b) / __gcd(a, b);
}

long long solve(int n, int x, int y, int z){
    long long temp = lcm(lcm(x, y), z);
    long long m = (long long)pow(10, n - 1);
    long long res = (m + temp - 1) / temp * temp;
    if (res < (long long)pow(10, n))
        return res;
    else return -1;
}

int main(){
    int n, x, y, z;
    cin >> x >> y >> z >> n;
    cout << solve(n, x, y, z);
}
