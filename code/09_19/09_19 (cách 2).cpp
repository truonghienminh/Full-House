// code by iwttry

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int n, a[1001], k, T;

int main(){
    // FastIO
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // input
    cin >> T;
    for (int c = 1; c <= T; c++){
        cin >> n >> k;
        memset(a, 0, 1001 * 4);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // handle
        int i = 0, j = 1, cnt = 0;
        sort(a, a + n);
        while (true){
            if (a[j] - a[i] <= k){
                j++;
                i++;
            }
            else{
                cnt++;
                i = j;
                j = i + 1;
                if (j >= n && i >= n)
                    break;
            }
        }
        // output
        cout << "Case #" << c << ": " << cnt << endl;
    }
    return 0;
}