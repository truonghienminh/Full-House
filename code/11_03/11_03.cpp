#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m, count = 0;
        cin >> n >> m;
        int a1[n], a2[m];
        for (int i = 0; i < n; i++){
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++){
            cin >> a2[i];
        }
        for (int i = 0; i < n; i++){
            bool check = true;
            for (int j = 0; j < m; j++){
                if (a1[i] == a2[j])
                    check = false;
            }
            if (check){
                cout << a1[i] << " ";
                count++;
            }
        }
        if (count == 0) cout << "NOT FOUND";
        cout << '\n';
    }
    return 0;
}
