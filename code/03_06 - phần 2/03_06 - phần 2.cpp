#include <iostream>
#include <math.h>
using namespace std;

bool check(int n){
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (!(n % i)){
            while(!(n % i)){
                n /= i;
                if (!n && count < 2 || ++count > 3)
                    return false;
            }
        }
    }
    return (n != 1) + count == 3;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if (check(n))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
