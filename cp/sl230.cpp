#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n, a[100001];
    cin>>n;
    vector<pair<int, int>> v(n);

    
    for (int i = 0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    }
    for (int i = 0; i<n; i++){
        int maxn = 0;
        for (int j = 0; j<i; j++){
            maxn = max(maxn, abs(v[i].first-v[j].first) + abs(v[i].second-v[j].second));
        }
        a[i] = maxn;
    }
    sort(a, a+n);
    cout<<a[n-1];
}