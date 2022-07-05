#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, chan[1001], le[1001], sochan = 0, sole = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x; 
        cin >> x;
        if (x % 2 == 0){
            chan[sochan] = x;
            sochan++;
        }
        else{
            le[sole] = x;
            sole++;
        }
    }
    sort(chan, chan + sochan);
    sort(le, le + sole, greater<int>());
    for (int i = 0; i < sochan; i++){
        cout << chan[i] << " "; 
    } 
    for (int i = 0; i < sole; i++){
        cout << le[i] << " ";
    } 
    return 0;
}