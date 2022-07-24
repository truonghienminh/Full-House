#include <iostream>
#include <algorithm>
using namespace std;

int solve(int arr[], int n, int k){
    int count = 0;
    sort(arr, arr + n);
    bool check = 0;
    for (int i = 1; i < n; i++){
        if (!(arr[i] - arr[i - 1] <= k))
            count++;
    }
    return count + 1;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 1; i <= t; i++){
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cout << "Case #" << i << ": " << solve(arr, n, k) << endl;
    }
    return 0;
}