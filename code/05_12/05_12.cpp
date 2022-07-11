#include <iostream>
using namespace std;

#define NMAX 1000002

int a[NMAX];

int main(){
    int n, maxx = -1e9, gtmaxx = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        a[x]++;
    }
    for (int i = 0; i < NMAX; i++){
        if (a[i] > maxx){
            maxx = a[i];
            gtmaxx = i;
        }
    }
    cout << gtmaxx << " " << maxx;
    return 0;
}