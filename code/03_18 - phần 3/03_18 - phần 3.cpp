#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool check2(int n){
    int tmp = n;
    bool check_tmp = false, check_n = false;
    while (tmp > 0){
        if (tmp % 10 == 6){
            check_tmp = true;
            break;
        }
        tmp /= 10;
    }
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    if (sum % 10 == 8) check_n = true;
    return check_tmp && check_n;
}

bool check1(int n){
    string s = to_string(n);
    string s1 = s;
    reverse(s.begin(), s.end());
    if (s1 == s) return true;
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
    return false;
}
