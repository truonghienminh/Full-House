#include <iostream>
#include <algorithm>
using namespace std;

int lis(string s){
    int f[10000];
    f[0] = 1;
    int res = 1;
    for (int i = 1; i < s.length(); i++){
        f[i] = 1;
        for (int j = 0; j < i; j++){
            if (s[i] > s[j]){
                f[i] = max(f[i], f[j] + 1);
                res = max(res, f[i]);
            }
        }
    }
    return 26 - res;
}

int main(){
    string s;
    cin >> s;
    cout << lis(s);
    return 0;
}