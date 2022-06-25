#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

long long lcm(long long a, long long b){
    return (a * b) / __gcd(a, b);
}

long long solve(int n, int x, int y, int z){
    long long temp = lcm(lcm(x, y), z); // BCNN của 3 số
    long long m = (long long)pow(10, n - 1); // số tự nhiên nhỏ nhất có n chữ số
    long long res = (m + temp - 1) / temp * temp;// công thức
    if (res < (long long)pow(10, n))// kiểm tra nếu số tìm được vẫn có n chữ số
        return res;
    else return -1;
}

int main(){
    int n, x, y, z;
    cin >> x >> y >> z >> n;
    cout << solve(n, x, y, z);
    return 0;
} 
