#include <iostream>
#include <cstring>
using namespace std;

int cnt[1000000] = {0};

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        bool check = false;
        for (int i = 0; i < n; i++){
            if (cnt[arr[i]] == 1){
                cout << arr[i] << endl;
                check = true;
                break;
            }
            cnt[arr[i]] = 1;
        }
        if (!check)
            cout << -1 << endl;
        memset(cnt, 0, sizeof(cnt));
    }
    return 0;
}