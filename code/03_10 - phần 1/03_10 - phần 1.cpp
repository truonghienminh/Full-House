#include <iostream>
#include <math.h>
using namespace std;

int prime[1001];

void sieve(){
    for (int i = 0; i <= 1000; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= sqrt(1000); i++){
        if (prime[i]){
            for (int j = i*i; j <= 1000; j += i){
                prime[j] = 0;
            }
        }
    }
}
int main(){
    sieve();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int i = 1; i <= sqrt(n); i++){
            if (prime[i])
                cout << i*i << " ";
        }
        cout << '\n';
    }
    return 0;
}
