#include <iostream>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    cout << (a / b + (a % b > 0)) * b;
    return 0;
}