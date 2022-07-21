#include <iostream>
using namespace std;

int a[100][100];
int b[100][100];
int c[100][100];
int n, m;

void input(){
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
}

void cvi(){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            b[j][i] = a[i][j];
        }
    }
}

void tich(){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            for (int l = 0; l < m; l++){
                c[i][j] += a[i][l] * b[l][j];
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    input();
    cvi();
    tich();
    return 0;
}
