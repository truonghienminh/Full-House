#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    int bd = 1;
    while (t--){
        vector<int> v;
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        int res[n * 2];
        for (int i = 0; i < n; i++){
            v.push_back(a[i]);
            v.push_back(b[i]);
        }
        cout << "Test " << bd << ": " << endl;
        for (auto x : v){
            cout << x << " ";
        }
        cout << endl;
        bd++;
    }
    return 0;
}