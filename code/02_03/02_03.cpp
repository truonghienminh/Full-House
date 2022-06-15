#include <iostream>
#include <math.h>
using namespace std;

bool check(int n){
    int i = sqrt(n);
    if (i*i == n) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        if (check(i))
            cout << i << " ";
    }
    return 0;
}
