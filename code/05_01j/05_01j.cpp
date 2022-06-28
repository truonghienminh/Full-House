#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (arr[i] * arr[i - 1] < 0 || arr[i] * arr[i+1] < 0)
            cout << arr[i] << " ";
    }
    return 0;
}