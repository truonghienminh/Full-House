#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool check2(int n){
    while (n > 0){
        if (n % 10 == 9)
            return false;
        n /= 10;
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

int main(){
    int n, count = 0;
    cin >> n;
    for (int i = 2; i < n; i++){
        if (check1(i) && check2(i))
            count++;
    }
    cout << count << endl;
    for (int i = 2; i < n; i++){
        if (check1(i) && check2(i))
            cout << i << " ";
    }
    return 0;
}
