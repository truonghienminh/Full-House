#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int res = 0;
    for (int i = 0; i < n; i++){
        if (s[i] % 2 == 0)
            res += i + 1;
    }
    cout << res;
    return 0;
}