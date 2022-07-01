#include <iostream>
using namespace std;

#define MAXN 10000000

bool check[MAXN];

int main(){
    int n;
    cin >> n;
    int arr[n];
    fill_n(check, MAXN - 1, false);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (check[arr[i]] == false){
            check[arr[i]] = true;
            cout << arr[i] << " ";
        }
    }
    return 0;
}
