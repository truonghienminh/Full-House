#include <iostream>
#include <map>
using namespace std;

#define NMAX 10001
#define INTMIN 0
#define FASTINPUT();    ios::sync_with_stdio(0);\
                        cin.tie(0);\
                        cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
long long n;

void sol(){
    map<long long, long long> m;
    long long maxx = INTMIN, gtmaxx;
    cin >> n;
    for (int i = 0; i < n; i++){
        long long x;
        cin >> x;
        m[x]++;
    }
    for (auto x:m){
        if (x.second > maxx){
            maxx = x.second;
            gtmaxx = x.first;
        }
    }
    cout << gtmaxx << " " << maxx << '\n';
}
int main(){
    FASTINPUT();
    int t;
    cin >> t;
    while (t--){
        sol();
    }
    return 0;
}