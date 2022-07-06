#include <iostream>
using namespace std;

string dec_to_bin(int n){
    string s = "";
    while (n > 0){
        s = char(n % 2 + 48) + s;
        n /= 2;
    }
    return s;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++){
            cout << dec_to_bin(i) << " ";
        }
        cout << '\n';
    }
    return 0;
}