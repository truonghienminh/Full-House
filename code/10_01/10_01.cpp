#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < m; i++){
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + m, greater<int>());
        cout << 1ll * a[n-1] * b[m-1] << endl;
    }
    return 0;
}