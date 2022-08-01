#include <iostream>
#include <string>
using namespace std;

bool check(string s, int n){
    int temp;
    bool check8 = false;
    for (int i = 0; i < n; i++){
        if (s[i] == '8'){
            check8 = true;
            temp = i;
            break;
        }
    }
    return check8 && (n - 1 - temp >= 10);
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        int n;
        string s;
        cin >> n >> s;
        if (check(s, n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}