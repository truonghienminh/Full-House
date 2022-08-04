#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 2e5 + 6;
int tmp[MAX];

void MrgSort(vector<int> &v, int l, int r){
    if (l < r){
        int m = l + (r - l) / 2;
        MrgSort(v, l, m);
        MrgSort(v, m + 1, r);
        int i = l, j = m + 1, k = 0;
        while (i <= m || j <= r)
            if ((v[i] < v[j] && i <= m && j <= r) || (j > r))
                tmp[k++] = v[i++];
            else
                tmp[k++] = v[j++];
        for (int i = 0; i < k; i++)
            v[i + l] = tmp[i];
    }
}

int n, m, k, ans = 0;
vector<int> a, b;

int main(){
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < m; i++){
        int x;
        cin >> x;
        b.push_back(x);
    }

    MrgSort(a, 0, n - 1);
    MrgSort(b, 0, m - 1);
    int i = 0, j = 0;

    while (i < n && j < m){
        if (abs(a[i] - b[j]) <= k){
            i++;
            j++;
            ans++;
        }
        else{
            if (a[i] - b[j] > k)
                j++;
            else
                i++;
        }
    }
    cout << ans << endl;
    return 0;
}