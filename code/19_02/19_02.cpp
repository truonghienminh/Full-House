#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#define ll long long

int main(){
    ll a[64];
    for (int i = 0; i < 64; i++){
        a[i] = pow(2, i);
    }
    string str;
    cin >> str;
    reverse(str.begin(), str.end());
    int n = str.length();
    ll res = 0;
    for (int i = 0; i < n; i++){
         if (str[i] == '1')
            res += a[i];
    }
    cout << res << endl;
    return 0;
}