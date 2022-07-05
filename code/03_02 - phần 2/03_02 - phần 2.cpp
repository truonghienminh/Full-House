#include <iostream>
using namespace std;

void in3(int n){
    for (int i = 2; i * i <= n; ++i){
        int cnt = 0;
        if (n % i == 0){
            while (n % i == 0){
                ++cnt;
                n /= i;
            }
            cout << i << "(" << cnt << ")" << " ";
        }
    }
    if (n != 1)
        cout << n << "(1)";
}

int main(){
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++){
        while (t--){
            int n;
            cin >> n;
            cout << "#TC" << i << ": ";
            in3(n);
            cout << '\n';
            i++;
        }
    }
    return 0;
}
