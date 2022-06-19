#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                if (arr[i] + arr[j] > x)
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
