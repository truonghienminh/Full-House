#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        cin >> s;
        int res = 0, count = 0;
        for (int i = 1; i < s.length(); i++){
            if (s[i] != s[i-1]){
                ++count;
                res = max(res, count);
            }
            else if (s[i] == s[i-1]){
                count = 0;
            }
        }
        cout << res + 1 << endl;
    }
    return 0;
}