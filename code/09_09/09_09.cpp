#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == x)
            count++;
    }
    cout << count;
    return 0;
}
