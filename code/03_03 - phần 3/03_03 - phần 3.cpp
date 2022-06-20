#include <iostream>
#include <math.h>
using namespace std;

bool check(int n){
    int i = sqrt(n);
    if (i*i == n) return true;
    return false;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        for (int i = a; i <= b; i++){
            if (check(i))
                cout << i << " ";
        }
        cout << '\n';
    }
    return 0;
}
