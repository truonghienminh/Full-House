#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int best = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = max(arr[i], sum + arr[i]);
        best = max(sum, best);
    }
    cout << best;
    return 0;
}
