#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    int T;
    cin >> T;
    while (T--){
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 9; i >= 0; i--){
            if (a[i] <= n){
                int cnt = 0;
                int m = n;
                for (int j = i; j >= 0; j--){
                    while (m >= a[j]){
                        m -= a[j];
                        cnt++;
                    }
                }
                v.push_back(cnt);
            }
        }
        sort(v.begin(), v.end());
        cout << v[0] << endl;
    }
    return 0;
}