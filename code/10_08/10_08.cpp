#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map<int, int> mp;

bool comp(int a, int b){
    if (mp[a] != mp[b])
        return mp[a] > mp[b];
    return a < b;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int &a : arr){
        cin >> a;
        mp[a]++;
    }
    sort(arr, arr + n, comp);
    for (auto x : arr){
        cout << x << " ";
    }
    return 0;
}