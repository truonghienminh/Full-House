#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int ans = 1e9, temp;
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                if (abs(arr[i] + arr[j]) < ans){
                    ans = abs(arr[i] + arr[j]);
                    ans = abs(ans);
                    temp = arr[i] + arr[j];
                }
            }
        }
        if (temp >= 0 && ans >= 0)
            cout << ans << endl;
        else
            cout << -ans << endl;
    }
    return 0;
}