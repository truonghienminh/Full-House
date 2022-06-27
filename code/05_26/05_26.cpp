#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    int x = 1;
    while (t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        cout << "Test " << x << ": " << endl;
        int chan = 0, le = 0;
        for (int i = 0; i < n * 2; i++){
            if (i % 2 == 0){
                cout << a[chan] << " ";
                chan++;
            }
            else{
                cout << b[le] << " ";
                le++;
            }
        }
        cout << '\n';
        ++x;
    }
    return 0;
}