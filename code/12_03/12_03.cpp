#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

const int maxn = 2e5 + 10;
int n, x, p[maxn], i, j, ans;
bool check[maxn];

void solve(){
    cin >> n >> x;
    for (int i = 0; i < n; ++i){
        cin >> p[i];
    }
    sort(p, p + n);
    i = 0;
    j = n - 1;
    while (i < j){
        if (p[i] + p[j] > x){
            --j;
        }
        else{          
            ++ans;
            check[i] = check[j] = true;
            ++i;
            --j;
        }
    }
    for (int i = 0; i < n; i++){
        ans += (check[i] == false);
    }
    cout << ans << "\n";
}

int main(){
    solve();
    return 0;
}