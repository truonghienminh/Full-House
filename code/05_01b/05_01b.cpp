#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int chan = 0, le = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0)
            chan++;
        else
            le++;
    }
    cout << chan << " " << le;
    return 0;
}