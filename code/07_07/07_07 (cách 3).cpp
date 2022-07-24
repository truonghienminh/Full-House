#include <iostream>
#include <set>

using namespace std;
int main(){
    // FastIO
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // declare variables
    string n, m;

    // input
    getline(cin, n);
    getline(cin, m);

    set<char> s1, s2;

    // handle
    for (int i = 0; i < m.length(); i++){
        s1.insert(m[i]);
    }
    for (int i = 0; i < n.length(); i++){
        s2.insert(n[i]);
    }
    // output
    for (auto x : s2){
        if (s1.find(x) != s1.end()){
            cout << x;
            s1.erase(x);
        }
    }
    return 0;
}