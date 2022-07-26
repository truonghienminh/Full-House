#include <iostream>
#include <cmath>
using namespace std;

bool check(int n){
    while (n > 0){
        int tmp = n % 10;
        if (tmp != 6 && tmp != 8)
            return false;
        n /= 10;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    for (int i = 6; i <= pow(10, n); i++){
        if (check(i))
            cout << i << " ";
    }
    return 0;
}