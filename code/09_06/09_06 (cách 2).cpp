#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if (binary_search(arr, arr + n, x))
        cout << 1;
    else
        cout << 0;
    return 0;
}