#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<string> v;
        while (n--){
            string x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++){
            cout << v[i];
        }
        cout << '\n';
    }
    return 0;
}