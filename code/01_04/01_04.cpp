#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    cout << a + b << " " << a - b << " " << a * b << " ";
    cout << fixed << setprecision(2) << (double)a/b;
    return 0;
}