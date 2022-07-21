#include<bits/stdc++.h>
using namespace std;
#define NMAX 100001
#define fi first
#define se second
void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
typedef long long ll;
typedef unsigned long long ull;
int n, m;
unsigned long long F[NMAX];
pair<int, long long> v[NMAX];
void inp(){
    cin>>n>>m;
    for (int i = 1;i <=n; i++){
        cin>>v[i].fi>>v[i].se;
    }
}
void out(){
    for (int i = 1; i<=n; i++){
        for (int j = m; j>=v[i].first; j--){
            F[j] = max(F[j], F[j - v[i]. first] + v[i].second);
        }
    }
    cout<<F[m];
}
int main(){
    FASTINPUT();
    inp();
    out();
}