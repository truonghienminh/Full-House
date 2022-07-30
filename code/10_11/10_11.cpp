#include <iostream>
#include <set>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    set<int> s1, s2, s3;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        s1.insert(x);
    }
    for (int i = 0; i < m; i++){
        int x;
        cin >> x;
        s2.insert(x);
    }
    for (int i = 0; i < k; i++){
        int x;
        cin >> x;
        s3.insert(x);
    }
    for (int x : s1){
        if (s2.count(x) && s3.count(x))
            cout << x << " ";
    }
    return 0;
}