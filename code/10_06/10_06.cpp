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
        int l, r;
        for (int i = 0; i < n; i++){
            if (arr[i] > arr[i + 1]){
                l = i;
                break;
            }
        }
        for (int i = n - 1; i > 0; i--){
            if (arr[i] < arr[i - 1]){
                r = i;
                break;
            }
        }
        int min = *min_element(arr + l, arr + r + 1);
        int max = *max_element(arr + l, arr + r + 1);
        for (int i = 0; i <= l; i++){
            if (arr[i] > min){
                l = i;
                break;
            }
        }
        for (int i = n - 1; i >= r; i--){
            if (arr[i] < max){
                r = i;
                break;
            }
        }
        cout << l + 1 << " " << r + 1 << endl;
    }
    return 0;
}