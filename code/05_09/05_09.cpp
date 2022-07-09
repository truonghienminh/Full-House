#include <iostream>
#include <cstring>
#include <queue>
#include <limits.h>

using namespace std;
#define NMAX 10001

int n, a[NMAX], lenmax;

void inp(){
    memset(a, 0, 4 * NMAX);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void out(){
    lenmax = INT_MIN;
    for (int i = 0; i < n; i++){
        int len = 1, j = i;
        while (a[j] < a[j + 1]){
            len += 1;
            j++;
        }
        i += j - i;
        if (len > lenmax)
            lenmax = len;
    }
    cout << lenmax << endl;
    for (int i = 0; i < n; i++){
        int len = 1, j = i;
        queue<int> q;
        while (a[j] < a[j + 1]){
            q.push(a[j]);
            len += 1;
            j++;
        }
        q.push(a[j]);
        if (len == lenmax){
            while (!q.empty()){
                cout << q.front() << " ";
                q.pop();
            }
            cout << endl;
        }
        i += j - i;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T, dem = 1;
    cin >> T;
    while (T--){
        inp();
        cout << "Test " << dem << ":" << endl;
        out();
        dem++;
    }
    return 0;
}