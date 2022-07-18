#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long a, b;
        cin >> a >> b;
        long long ans = 1;
        for (int i = 1; i <= b; i++){
            ans *= a;
        }
        cout << ans << endl;
    }
    return 0;
}