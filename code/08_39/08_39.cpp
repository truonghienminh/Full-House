#include <iostream>
#include <string>
using namespace std;

int check(string s){
    if (s[0] == '0') return 2;
    for (int i = 0; i < s.length(); i++){
        if (!isdigit(s[i]))
            return 2;
    }
    bool check[10] = {0};
    for (int i = 0; i < s.length(); i++){
        if (isdigit(s[i]))
            check[s[i]-'0'] = true;
    }
    int res = 0;
    for (int i = 0; i < 10; i++){
        if (check[i] == false)
            return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        if (check(s) == 1)
            cout << "YES" << endl;
        else if (check(s) == 0)
            cout << "NO" << endl;
        else if (check(s) == 2)
            cout << "INVALID" << endl;
    }
    return 0;
}