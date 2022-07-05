#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long

int main(){
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << arr[n-1] * arr[n-2];
    return 0;
}