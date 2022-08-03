#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, so_chan = 0, so_le = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int chan[1001], le[1001];
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            chan[so_chan] = arr[i];
            so_chan++;
        }
        else{
            le[so_le] = arr[i];
            so_le++;
        }
    }
    sort(chan, chan + so_chan);
    sort(le, le + so_le, greater<int>());
    int j = 0, k = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            cout << chan[j] << " ";
            j++;
        }
        else{
            cout << le[k] << " ";
            k++;
        }
    }
    return 0;
}