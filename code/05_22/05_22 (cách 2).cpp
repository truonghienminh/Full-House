#include <iostream>
using namespace std;

#define MAX 1000001

int main(){
    int n, m, a[MAX], b[MAX], c[MAX];
    cin >> n >> m;
    for (int i = 0; i < n + m; i++){
        cin >> a[i];
    }
    sort(a, a + n + m);
    int j = 0, k = 1;
    for (int i = 0; i < n + m; i++){
        if (a[i] != a[i + 1]){
            b[j] = a[i];
            j++;
        }
        else{
            if (c[k - 1] != a[i]){
                c[k] = a[i];
                k++;
            }
        }
    }
    for (int i = 0; i < j; i++){
        cout << b[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < k; i++){
        cout << c[i] << " ";
    }
    return 0;
}