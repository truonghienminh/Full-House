#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    int tmp = n - 1;
    for (int i = 0; i < n; i++){
        sort(v.begin(), v.end() - tmp);
        cout << "Buoc " << i << ": ";
        for (vector<int>::iterator it = v.begin(); it < v.end() - tmp; it++){
            cout << *it << " ";
        }
        cout << '\n';
        tmp--;
    }
    return 0;
}