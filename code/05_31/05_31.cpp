#include <iostream>
#include <cmath>
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
        int C = 1e9;
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                C = min(C, abs(arr[i] - arr[j]));
            }
        }
        int D = 0;
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                if (abs(arr[i] - arr[j]) == C)
                    D++;
            }
        }
        cout << C << " " << D << endl;
    }
    return 0;
}