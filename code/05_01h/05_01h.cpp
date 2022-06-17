#include <iostream>
using namespace std;

bool check(int n){
    bool check1 = false, check2 = false;
    while (n > 0){
        int temp = n % 10;
        if (temp == 1)
            check1 = true;
        if (temp == 9)
            check2 = true;
        n /= 10;
    }
    if (check1 && check2) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bool count = false;
    for (int i = 0; i < n; i++){
        if (check(arr[i])){
            cout << arr[i] << " ";
            count = true;
        }
    }
    if (count == false)
        cout << -1;
    return 0;
}
