#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--){
        int x;
        cin >> x;
        if (x == 2021){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
