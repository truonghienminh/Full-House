#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int &a : arr){
        cin >> a;
    }
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = j + 1; k < n; k++){
                if (arr[i] + arr[j] + arr[k] == x){
                    cout << i + 1 << " " << j + 1 << " " << k + 1;
                    return 0;
                }
            }
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}