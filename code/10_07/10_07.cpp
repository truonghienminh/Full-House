#include <iostream>
using namespace std;

bool check[1000000];

int main(){
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        while (arr[i] > 0){
            int temp = arr[i] % 10;
            if (check[temp] == 0)
                check[temp] = true;
            arr[i] /= 10;
        }
    }
    for (int i = 0; i < 1000000; i++){
        if (check[i])
            cout << i << " ";
    }
    return 0;
}