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
        int idx = i, check = 0;
        for (int j = i + 1; j < n; j++){
            if (arr[idx] > arr[j]){
                idx = j;
                check = 1;
            }
        }
        if (check){
            swap(arr[idx], arr[i]);
            cout << i + 1 << " " << idx + 1 << endl;
        }
    }
    return 0;
}