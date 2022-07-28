#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define fi first
#define se second
vector<pair<int, int>> v;

int main(){
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    for (auto it = v.begin(); it != v.end(); it++){
        if ((*it).fi <= ans)
            ans += (*it).se;
        else
            ans += (*it).fi - ans + (*it).se;
    }
    cout << ans;
    return 0;
}