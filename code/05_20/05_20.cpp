#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a1[n], a2[m];
    for (int i = 0; i < n; i++){
        cin >> a1[i];
    }
    for (int i = 0; i < m; i++){
        cin >> a2[i];
    }
    int ans[n+m];
    for (int i = 0; i < n + m;){
        for (int j = 0; j < n; j++){
            ans[i] = a1[j];
            i++;
        }
        for (int j = 0; j < m; j++){
            ans[i] = a2[j];
            i++;
        }
    }
    sort(ans, ans + n + m);
    for (int i = 0; i < n + m; i++){
        cout << ans[i] << " ";
    }
    return 0;
}
