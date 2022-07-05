#include <iostream>
using namespace std;

long long F[1000];

long long fibo(int n){
    if (F[n] != -1) return F[n];
    if (n == 0) return F[n] = 0;
    if (n == 1) return F[n] = 1;
    F[n] = fibo(n-1) + fibo(n-2);
    return F[n];
}

int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < 1000; i++){
        F[i] = -1;
    }
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    for (int cnt = 0; cnt <= 1000; cnt++){
        while (h1 <= h2 && c1 <= c2){
            for (int i = c1; i <= c2; i++){
                arr[h1][i] = fibo(cnt);
                cnt++;
            }
            h1++;
            for (int i = h1; i <= h2; i++){
                arr[i][c2] = fibo(cnt);
                cnt++;
            }
            c2--;
            if (c1 <= c2){
                for (int i = c2; i >= c1; i--){
                    arr[h2][i] = fibo(cnt);
                    cnt++;
                }
                h2--;
            }
            if (h1 <= h2){
                for (int i = h2; i >= h1; i--){
                    arr[i][c1] = fibo(cnt);
                    cnt++;
                }
                c1++;
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}
