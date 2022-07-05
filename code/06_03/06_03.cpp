#include <iostream>
#include <cmath>
using namespace std;

bool check(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int max = 0, index = 0;
    for (int i = 0; i < n; i++){
        int count = 0;
        for (int j = 0; j < m; j++){
            if (check(arr[i][j]))
                count++;
            if (count > max){
                max = count;
                index = i;
            }
        }
    }
    cout << index + 1 << endl;
    for (int j = 0; j < m; j++){
        if (check(arr[index][j]))
            cout << arr[index][j] << " ";
    }
    return 0;
}