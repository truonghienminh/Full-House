#include <iostream>
using namespace std;

int main(){
    int n, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (arr[i] != arr[n-1-i])
            count++;
    }
    if (count == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}