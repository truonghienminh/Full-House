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
    int max = 0;
    for (int j = 0; j < m; j++){
        int count = 0;
        for (int i = 0; i < n; i++){
            if (check(arr[i][j]))
                count++;
            if (count > max)
                max = j;
        }
    }
    for (int i = 0; i < n; i++){
        cout << arr[i][max] << endl;
    }
    return 0;
}