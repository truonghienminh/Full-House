#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    int res = 0;
    for (int i = 0; i < n; i++){
        res += arr[i];
        for (int j = i + 1; j <= n; j++){
            if (arr[j] != 0)
                arr[j]--;
        }
    }
    cout << res;
    return 0;
}