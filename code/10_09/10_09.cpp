#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int &a : arr){
        cin >> a;
    }
    int count = 0;
    for (int i = 0; i < n; i++){
        bool check = 0;
        int min = i;
        for (int j = i + 1; j < n; j++){
            if (arr[min] > arr[j]){
                min = j;
                check = 1;
            }
        }
        if (check){
            swap(arr[i], arr[min]);
            count++;
        }
    }
    cout << count;
    return 0;
}