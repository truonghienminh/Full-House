#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        long long i = sqrt(n);
        if (i*i == n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
