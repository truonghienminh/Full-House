#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (i == 0)
            cout << arr[1] - arr[0] << " " << arr[n-1] - arr[0] << endl;
        else if (i == n - 1)
            cout << arr[n-1] - arr[n-2] << " " << arr[n-1] - arr[0] << endl;
        else
            cout << min(arr[i] - arr[i-1], arr[i+1] - arr[i]) << " " << max(arr[i] - arr[0], arr[n-1] - arr[i]) << endl;
    }
    return 0;
}
