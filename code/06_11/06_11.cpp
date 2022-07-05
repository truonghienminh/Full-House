#include <iostream>
#include <cstring>
using namespace std;

long long n, a[1001][1001];
bool snt[100001];

void era(){
    memset(snt, 0, 100001);
    snt[0] = snt[1] = 1;
    for (int i = 2; i <= 100000 ; i++){
        if (!snt[i])
            for (int j = 2*i; j <= 100000; j += i){
                snt[j] = 1;
            }
    }
}

void inp(){
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}

void out(){
    int temp = 0;
    for (int i = 0; i < n; i++){
        if (!snt[a[i][i]]){
            temp++;
        }
    }
    for (int i = 0; i < n; i++){
        if (!snt[a[i][n-i-1]]) temp++;
    }
    if (n&1&&!(snt[a[n/2][n/2]])) temp--;
    cout << temp;
}

int main(){
    era();
    inp();
    out();
    return 0;
}
