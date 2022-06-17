#include <iostream>
#include <math.h>
using namespace std;

bool check(int n){
    while (n > 0){
        int temp = n % 10;
        if (temp % 2 == 0)
            return false;
        n /= 10;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int count = 0, j = 0;
    long long res[n];
    for (int i = 0; i < n; i++){
        if (check(abs(arr[i]))){
            count++;
            res[j] = arr[i];
            j++;
        }
    }
    cout << count << endl;
    for (int i = 0; i < count; i++){
        cout << res[i] << " ";
    }
    return 0;
}