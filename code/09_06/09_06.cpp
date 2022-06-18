#include <iostream>
using namespace std;

bool binarysearch(int a[] , int n, int x){
    int l=0, r = n-1;
    while(l <= r){
        int m = (l+r) / 2;
        if(a[m] == x)
            return true;
        else if(a[m] < x)
            l = m+1;
        else
            r = m- 1;
       }
    return false;
}

int main(){
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << binarysearch(arr, n, x);
    return 0;
}
