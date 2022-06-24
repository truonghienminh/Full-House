#include <iostream>
#include <algorithm>
using namespace std;

int main (){
    int n;
    cin >> n;
    int i = n - 1;
    long long a[n];
    for (int j = 0; j < n; j++){
        cin >> a[j];
    }
    sort (a, a + n);
    while (i > 0){
        if (a[i - 1] != a[i]){
            cout << a[i] << " " << a[i - 1];
            break;
        }
        else
            i--;
    }
    if (i == 0)
        cout << a[i] << " " << -1;
    return 0;
}