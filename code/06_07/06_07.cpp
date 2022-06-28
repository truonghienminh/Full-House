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
    int x, y;
    cin >> x >> y;
    x -= 1, y -= 1;
    for (int j = 0; j < m; j++){
        swap(arr[x][j], arr[y][j]);
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}
