#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int &x : arr){
        cin >> x;
    }
    int l = 0, r = n - 1;
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++){
        if (arr[j] <= pivot){
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]);
    int index;
    for (int i = n - 1; i >= 0; i--){
        if (arr[i] == pivot){
            index = i;
            break;
        }
    }
    bool check = true;
    for (int i = 0; i < n; i++){
        if (arr[i] == pivot && check && i == index){
            cout << "[" << arr[i] << "] ";
            check = false;
        }
        else
            cout << arr[i] << " ";
    }
    return 0;
}