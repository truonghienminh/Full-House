#include <iostream>
using namespace std;

bool check(int arr[], int n){
    for (int i = 1; i < n; i++){
        if (arr[i] < arr[i-1])
            return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++){
        if (check(arr, n)){
            break;
        }
        for (int i = 1; i < n; i++){
            if (arr[i] < arr[i-1])
                swap(arr[i], arr[i - 1]);
        }
        cout << "Buoc " << i << ": ";
        for (auto x : arr){
            cout << x << " ";
        }
        cout << '\n';
    }
    return 0;
}