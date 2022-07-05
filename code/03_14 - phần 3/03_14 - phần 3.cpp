#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

bool check3(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

bool check1(int n){
    string s = to_string(n);
    string s1 = s;
    reverse(s.begin(), s.end());
    if (s1 == s) return true;
    return false;
}

bool check2(int n){
    int count = 0;
    for (int i = 2; i <= n/2; i++){
        if (n % i == 0 && check3(i))
            count++;
    }
    if (count >= 3) return true;
    return false;
}

int main(){
    int a, b, count = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        if (check1(i) && check2(i)){
            cout << i << " ";
            count++;
        }
    }
    if (count == 0) cout << -1;
    return 0;
}
