#include <iostream>
using namespace std;

int check[1000000];

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        check[arr[i]]++;
    }
    for (int i = 0; i < n; i++){
        if (check[arr[i]] == 1)
            cout << arr[i] << " ";
    }
    return 0;
}