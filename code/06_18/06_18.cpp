#include <iostream>
using namespace std;

void nhapmang(int a[][10], int m, int n){
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
}

int main(){
    int n, m, p;
    cin >> n >> m >> p;
    int a[10][10], b[10][10];
    nhapmang(a, n, m);
    nhapmang(b, m, p);
    int c[n][p];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < p; j++){
            c[i][j] = 0;
            for (int k = 0; k < m; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < p; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
