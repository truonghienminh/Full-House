#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long n = 10000000;
    bool check[n+1];
    for (int i = 2; i <= n; i++){
        check[i] = true;
    }
    for (int i = 2; i <= n; i++){
        if (check[i] == true) {
            for (int j = 2 * i; j <= n; j += i) {
                check[j] = false;
            }
        }
    }
    int t;
    cin >> t;
    while (t--){
        long long n;
        int count = 0;
        cin >> n;
        for (int i = 2; i <= sqrt(n); i++){
            if (check[i])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
