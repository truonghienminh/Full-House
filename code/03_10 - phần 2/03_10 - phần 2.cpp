#include <iostream>
#include <math.h>
using namespace std;

int check(long long n){
    int m = n;
    for(int i = 2; i <= sqrt(n); i++){
        if(!(n%i)){
            if(m % (i*i))
                return 0;
            while(!(n%i))
                n /= i;
        }
    }
    return (m != n) && (n == 1);
}

int main(){
    int a, b;
    cin >> a >> b;
    for(int i = a ; i <= b; i++){
        if(check(i))
            cout << i << " ";
    }
    return 0;
}
