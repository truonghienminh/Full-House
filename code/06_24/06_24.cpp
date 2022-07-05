#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for(int k = 0; k < n ;k++){
        for(int i = 0; i < m-1 ;i++){
            for(int j = m-1; j > i ;j--){
                if(arr[k][j] < arr[k][j-1]){
                    swap(arr[k][j], arr[k][j-1]);
                }
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}
