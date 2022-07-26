#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++){
        int tmp = arr[i], pos = i - 1;
        while (pos >= 0 && arr[pos] > tmp){
            arr[pos + 1] = arr[pos];
            pos--;
        }
        cout << tmp << " " << pos + 1 << endl;
        arr[pos + 1] = tmp;
    }
    return 0;
}