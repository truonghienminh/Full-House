#include <iostream>
#include <math.h>
using namespace std;

bool check(long long n){
    int tmp = n, temp = n;
    int sum = 0, count = 0;
    while (temp > 0){
        count++;
        temp /= 10;
    }
    while (tmp > 0){
        sum += pow(tmp%10, count);
        tmp /= 10;
    }
    return sum == n;
}

int main(){
    int n;
    cin >> n;
    if (check(n))
        cout << 1;
    else
        cout << 0;
    return 0;
}
