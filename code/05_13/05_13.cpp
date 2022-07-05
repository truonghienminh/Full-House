#include <iostream>
using namespace std;

int count[1000000];

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max = 0, number = 0;
    for (int i = 0; i < n; i++){
        count[arr[i]]++;
        if (count[arr[i]] > max){
            max = count[arr[i]];
            number = arr[i];
        }
    }
    cout << number << " " << max;
    return 0;
}