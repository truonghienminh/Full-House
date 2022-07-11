#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            sum += arr[j];
            if (sum == x){
                count++;
                sum = 0;
                break;
            }
            else if (sum > x){
                sum = 0;
                break;
            }
        }
    }
    cout << count;
    return 0;
}