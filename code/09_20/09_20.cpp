#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        mp.insert({x, y});
    }
    int a[n], b[n], h = 0;
    for (auto x : mp){
        a[h] = x.first;
        b[h] = x.second;
        h++;
    }
    int m = 0;
    for (int i = 0; i < h; i++){
        int cnt = b[i], res = 1;
        for (int j = i; j < h; j++){
            if (a[j] > cnt){
                cnt = b[j];
                res++;
            }
        }
        m = max(m, res);
    }
    cout << m;
    return 0;
}