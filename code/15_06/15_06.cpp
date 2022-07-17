#include <iostream>
using namespace std;

bool check(int n){
    while(n){
        if (n % 10 != 0 && n % 10 != 1)
            return false;
        n /= 10;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int count = 0;
        for (int i = 1; i <= n; i++){
            if (check(i))
                count++;
        }
        cout << count << endl;
    }
    return 0;
}