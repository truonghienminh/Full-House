#include <iostream>
#include <math.h>
using namespace std;

bool check1(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

bool check2(int n){
    while (n > 0){
        int temp = n % 10;
        if (!check1(temp))
            return false;
        n /= 10;
    }
    return true;
}

bool check3(int n){
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    if (check1(sum)) return true;
    return false;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b;
        int count = 0;
        cin >> a >> b;
        for (int i = a; i <= b; i++){
            if (check1(i) && check2(i) && check3(i))
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
