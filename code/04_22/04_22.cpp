#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int32_t arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0)
            count++;
    }
    cout << count;
    return 0;
}