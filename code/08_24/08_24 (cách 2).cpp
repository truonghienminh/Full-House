#include <iostream>
#include <string.h>
using namespace std;

void solve(string s){
    long long ans = 0, sum = 0;
    for (auto x : s){
        if (isdigit(x))
            sum = sum * 10 + x - '0';
        else{
            ans += sum;
            sum = 0;
        }
    }
    ans += sum;
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}