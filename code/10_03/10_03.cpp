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
        int count = 0;
        for (int i = 1; i < n; i++){
            count += max(0, arr[i] - arr[i - 1] - 1);
        }
        cout << count << endl;
    }
    return 0;
}