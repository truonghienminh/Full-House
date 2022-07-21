#include <iostream>
using namespace std;

int main(){
    int i, j, n, m, a[10][10];
    cin >> n >> m;
    // nhapmang(a, n, m);
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int res = -1e9, hang, cot;
    for (i = 0; i < n; i++){
        int sum = 0;
        for (j = 0; j < m; j++){
            sum += a[i][j];
        }
        if (sum > res){
            res = sum;
            hang = i;
        }
    }
    res = -1e9;
    for (i = 0; i < m; i++){
        int sum = 0;
        for (j = 0; j < n; j++){
            if (j != hang)
                sum += a[j][i];
        }
        if (sum > res){
            res = sum;
            cot = i;
        }
    }
    for (i = 0; i < m; i++){
        if (i != hang){
            for (j = 0; j < n; j++){
                if (j != cot)
                    cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
