#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, count[100000] = {0}, maxn = 0;
        bool check[100000] = {0};
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            count[arr[i]]++;
        }
        for (int i = 0; i < 100000; i++){
            maxn = max(maxn, count[i]);
        }
        for (int i = 0; i < n; i++){
            if (count[arr[i]] == maxn && !check[arr[i]]){
                cout << arr[i] << " ";
                check[arr[i]] = true;
            }
        }
        cout << '\n';
    }
    return 0;
}