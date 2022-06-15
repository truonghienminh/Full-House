#include <iostream>
#include <math.h>
using namespace std;

int ktra(int n){
    if (n < 2) return 0;
    else{
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0)
                return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (ktra(arr[i]))
            cout << arr[i] << " ";
    }
    return 0;
}
