#include <iostream>
using namespace std;

int main(){
    int n, a[10005];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int dem = 0;
    for (int i = 0; i < n - 1; i++){
        bool check = 0;
        for (int j = i + 1; j < n; j++){
            if (a[i] > a[j]){
                swap(a[i], a[j]);
                check = 1;
            }
        }
        if (check){
            cout << "Buoc " << dem + 1 << ": ";
            for (int k = 0; k < n; k++){
                cout << a[k] << " ";
            }
            cout << '\n';
            dem++;
        }
    }
    return 0;
}