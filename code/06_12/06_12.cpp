#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m = n;
    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[j][i] << " ";
        }
        cout << '\n';
    }
    return 0;
}
