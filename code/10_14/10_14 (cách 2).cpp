#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

#define fi first
#define se second
map<int,int> mp;

int main(){
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        mp.insert({x, y});
    }
    // sort(mp.begin(), mp.end());
    for (auto it = mp.begin(); it != mp.end(); it++){
        if ((*it).fi <= ans)
            ans += (*it).se;
        else
            ans += (*it).fi - ans + (*it).se;
    }
    cout << ans;
    return 0;
}