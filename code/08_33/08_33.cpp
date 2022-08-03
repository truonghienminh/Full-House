#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string a, b, c;
        cin >> a >> b >> c;
        bool check = true;
        for (int i = 0; i < c.length(); i++){
            if (c[i] == b[i])
                a[i] = b[i];
        }
        for (int i = 0; i < c.length(); i++){
            if ((a[i] == b[i] || a[i] != b[i]) && (c[i] != a[i] && c[i] != b[i])){
                check = false;
                break;
            }
        }
        if (check)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}