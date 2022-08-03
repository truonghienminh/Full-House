#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<long long, int> m;
    for (int i = 0; i < n; i++){
        long long x;
        cin >> x;
        m[x]++;
    }
    for (auto x : m){
        if (x.second % 2 == 1){
            cout << x.first;
            break;
        }
    }
    return 0;
}