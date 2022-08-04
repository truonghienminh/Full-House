#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr + 1, arr + n, greater<int>());
    long long sum = arr[0];
    for (int i = 1; i < n; i++){
        if (k > 0)
            sum += arr[i];
        else
            sum -= arr[i];
        k--;
    }
    cout << sum;
    return 0;
}