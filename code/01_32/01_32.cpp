#include <bits/stdc++.h>
using namespace std;

int main(){
    int64_t arr[5];
    for (int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    sort(arr, arr + 5);
    cout << arr[1];
    return 0;
}