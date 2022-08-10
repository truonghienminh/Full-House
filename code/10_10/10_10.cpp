#include <iostream>
#include <algorithm>
using namespace std;

int cnt[5];

int vtdau(int a[], int l, int r, int x){
    int res = -1;
    while (l <= r){
        int m = (l + r) / 2;
        if (a[m] > x){
            res = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    return res;
}

int dem(int y[], int m, int x){
    if (x == 0)
        return 0;
    if (x == 1)
        return cnt[0];
    long long res = cnt[0] + cnt[1];
    int l = vtdau(y, 0, m - 1, x);
    if (l != -1)
        res += m - l;
    if (x == 2)
        res -= cnt[3] + cnt[4];
    if (x == 3)
        res += cnt[2];
    return res;
}

int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
        if (b[i] <= 4)
            cnt[b[i]]++;
    }
    sort(b, b + m);
    long long ans = 0;
    for (int x : a){
        ans += dem(b, m, x);
    }
    cout << ans;
    return 0;
}