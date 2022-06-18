#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bool check = false;
    for (int i = 0; i < n; i++){
        if (arr[i] == x){
            check = true;
            break;
        }
    }
    cout << check;
    return 0;
}