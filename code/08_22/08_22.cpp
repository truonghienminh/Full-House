#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        int cnt[256] = {0};
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++){
            cnt[s[i]]++;
        }
        int res = 0;
        for (auto x : cnt){
            if (x % 2 != 0)
                res++;
        }
        if (res <= 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}\