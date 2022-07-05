#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int q;
    cin >> q;
    while (q--){
        long long l, r, sum = 0;
        cin >> l >> r;
        l--, r--;
        for (int i = l; i <= r; i++){
            sum += arr[i];
        }
        cout << sum << endl;
    }
    return 0;
}