#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string x;
        getline(cin, x);
        m[x]++;
    }
    cout << m.size();
    return 0;
}