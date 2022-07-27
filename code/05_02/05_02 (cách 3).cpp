#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    bool check = true;
    for (int i = 1; i < v.size(); i++){
        if (v[i] <= v[i-1]){
            check = false;
            break;
        }
    }
    if (check)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}