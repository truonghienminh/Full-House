#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bool check = true;
    for (int i = 0; i < n; i++){
        if (arr[i] >= arr[i+1]){
            check = false;
            break;
        }
    }
    if (check == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}