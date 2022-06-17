#include <iostream>
using namespace std;

bool check(int c, int arr[], int n){
    for (int i = 0; i < n; i++){
        if (arr[i] == c)
            return true;
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int j, c;
        cin >> j;
        while (j--){
            cin >> c;
            if (check(c, arr, n))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
