#include <iostream>
using namespace std;

#define ll long long

bool check(ll a, ll b, ll c){
    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
        return true;
    return false;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        bool c = 0;
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                for (int k = j + 1; k < n; k++){
                    if (check(arr[i], arr[j], arr[k])){
                        c = 1;
                        break;
                    }
                }
            }
        }
        if (c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}