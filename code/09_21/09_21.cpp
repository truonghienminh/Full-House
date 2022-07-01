#include <iostream>
#include <algorithm>
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
        sort(arr, arr + n);
        bool check[n];
        fill_n(check, n, false);
        int j = 0;
        if (n % 2 != 0){
            for (int i = n-1; i > n/2, j < n/2; i--){
                cout << arr[i] << " " << arr[j] << " ";
                ++j;
            }
            cout << arr[n/2];
        }
        else{
            for (int i = n-1; i > n/2, j < n/2; i--){
                cout << arr[i] << " " << arr[j] << " ";
                ++j;
            }
        }
        cout << '\n';
    }
    return 0;
}
