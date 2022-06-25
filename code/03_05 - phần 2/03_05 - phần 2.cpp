#include <iostream>
using namespace std;

int count(int n){
    int res = 0;
    for (int i = 5; i <= n; i++){//đếm số lần xuất hiện của số 5
        int tmp = i;
        while (tmp % 5 == 0){
            res++;
            tmp /= 5;
        }
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << count(n) << endl;
    }
    return 0;
}
