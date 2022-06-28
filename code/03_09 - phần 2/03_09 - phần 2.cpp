#include <iostream>
#include <cmath>
using namespace std;

bool check(int n){
    for (int i = 2; i <= sqrt(n); i++){
        int count = 0;
        while (n % i == 0){
            count++;
            n /= i;
        }
        if (count >= 2)
            return true;
    }
    return false;
}

int main(){
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        if (check(i))
            cout << i << " ";
    }
    return 0;
}
