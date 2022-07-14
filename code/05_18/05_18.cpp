#include <iostream>
using namespace std;

#define NMAX 1000001

void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

typedef long long ll;
typedef unsigned long long ull;
ll n, k, a[NMAX], Sc[NMAX], maxn = INT_MIN, vtmaxn;

void inp(){
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void out(){
    memset(Sc, 0, NMAX * 4);
    for (int i = 0; i < k; i++){
        Sc[0] += a[i];
    }
    for (int i = 1; i <= n - k; i++){
        Sc[i] = Sc[i - 1] - a[i - 1] + a[i + k - 1];
    }
    for (int i = 0; i <= n - k; i++)
        if (Sc[i] >= maxn){
            maxn = Sc[i];
            vtmaxn = i;
        }
    cout << maxn << '\n';
    for (int i = vtmaxn; i < vtmaxn + k; i++){
        cout << a[i] << " ";
    }
}

int main(){
    FASTINPUT();
    inp();
    out();
    return 0;
}