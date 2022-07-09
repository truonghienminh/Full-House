#include <iostream>
using namespace std;

int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
    int n;
    cin >> n;
    int arr[n], count = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (gcd(arr[i], arr[j]) == 1)
                count++;
        }
    }
    cout << count;
    return 0;
}