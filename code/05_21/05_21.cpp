#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m], hop[n+m], giao[min(n, m)];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    int i = 0, j = 0, g = 0, h = 0;
    while (i < n && j < m){
        if (a[i] == b[j]){
            giao[g] = a[i];
            hop[h] = a[i];
            g++, h++, i++, j++;
        }
        else if (a[i] > b[j]){
            hop[h++] = b[j++];
        }
        else{
            hop[h++] = a[i++];
        }
    }
    while (i < n){
        hop[h++] = a[i++];
    }
    while(j < m){
        hop[h++] = b[j++];
    }
    for (int i = 0; i < h; i++){
        cout << hop[i] << " ";
    }
    cout << '\n';
    for (int i = 0; i < g; i++){
        cout << giao[i] << " ";
    }
    return 0;
}