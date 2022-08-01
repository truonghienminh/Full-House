#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    for (int x : arr){
        if (mp[x]){
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
    return 0;
}