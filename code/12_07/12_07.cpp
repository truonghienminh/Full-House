#include <iostream>
#include <map>
using namespace std;

map<int, int> ans;
int x, n;

bool check(int a){
    int c = x - a;
    if (ans.find(c) != ans.end() && c != a)
        return true;
    return false;
}

int main(){
    cin >> n >> x;
    int a;
    for (int i = 0; i < n; i++){
        cin >> a;
        ans.insert({a, i + 1});
    }
    int res = -1;
    for (auto i : ans){
        if (check(i.first)){
            res = i.first;
            break;
        }
    }
    if (res != -1)
        cout << ans[res] << " " << ans[x - res];
    else
        cout << "IMPOSSIBLE";
    return 0;
}
