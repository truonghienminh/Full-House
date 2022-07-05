#include <iostream>
#include <vector>
using namespace std;

#define NMAX 100001
typedef unsigned long long ll;
ll n, a[100000], c = 0;

vector<pair<ll, int>> v;

void inp(){
    cin >> n;
}
void pt(ll n){
    while (n > 1){
        for (ll i = 2; i <= n; i++){
            while (n % i == 0){
                n = n / i;
                a[c] = i;
                c++;
            }
        }
    }
    for (int i = 0; i < c; i++){
        int biendem = 1;
        while (a[i] == a[i + 1]){
            i++;
            biendem++;
        }
        v.push_back({a[i], biendem});
    }
}
void out(){
    for (auto x : v){
        for (int i = 0; i < x.second; i++){
            cout << x.first << " ";
        }
    }
    cout << endl;
    for (auto x : v){
        cout << x.first << " ";
    }
    cout << endl;
    for (auto x : v){
        cout << x.first << '(' << x.second << ')' << ' ';
    }
    cout << endl;
    int biendem = 0;
    for (auto x : v){
        for (int i = 0; i < x.second; i++){
            if (biendem == 0){
                cout << x.first;
                biendem++;
            }
            else
                cout << 'x' << x.first;
        }
    }
    cout << endl;
    biendem = 0;
    for (auto x : v){
        if (biendem == 0){
            cout << x.first << '^' << x.second;
            biendem++;
        }
        else{
            cout << '*' << x.first << '^' << x.second;
        }
    }
}
int main(){
    inp();
    pt(n);
    out();
    return 0;
}