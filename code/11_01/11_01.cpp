#include <iostream>
#include <map>
using namespace std;

#define NMAX 10001
#define FASTINPUT();    ios::sync_with_stdio(0);\
                        cin.tie(0);\
                        cout.tie(0);

typedef long long ll;
typedef unsigned long long ull;
int n;

void sol(){
    map<ull, ull> m;
    cin >> n;
    for (int i = 0; i < n ; i++){
        ull x;
        cin >> x;
        m[x]++;
    }
    int temp = 0;
    for (auto x:m){
        temp++;
    }
    cout << temp << '\n';
}

int main(){
    FASTINPUT();
    int T;
    cin >> T;
    while(T--){
        sol();
    }
    return 0;
}
