#include <iostream>
using namespace std;

int main(){
    int n;
    bool check = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (arr[i] == 2021)
            check = true;
    }
    if (check)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}