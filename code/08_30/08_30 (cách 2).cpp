#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int idx = -1, res = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '1'){
            if (idx == -1)
                idx = i;
            else{
                res += i - idx - 1;
                idx = i;
            }
        }
    }
    cout << res;
    return 0;
}