#include <iostream>
using namespace std;

void solve(int arr[], int n){
    bool check = false;
    for (int i = 0; i < n; i++){
        int min = i;
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i){
            swap(arr[i], arr[min]);
            check = true;
        }
        if (check == true){
            cout << "Buoc " << i + 1 << ": ";
            for (int i = 0; i < n; i++){
                cout << arr[i] << " ";
            }
            cout << '\n';
            check = false;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    solve(arr, n);
    return 0;
}