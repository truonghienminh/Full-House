#include <iostream>
#include <math.h>
using namespace std;

bool check1(int n){
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

bool check2(int n){
    while (n > 0){
        int temp = n % 10;
        if (temp != 2 && temp != 3 && temp != 5 && temp != 7)
            return false;
        n /= 10;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        int count = 0;
        for (int i = a; i <= b; i++){
            if (check1(i) && check2(i)){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}