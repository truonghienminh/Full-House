#include <iostream>
#include <cstring>
using namespace std;

int check[1000000];
bool ifPrinted[1000000];

int main(){
    int n;
    memset(ifPrinted, 0, 1000000);
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        check[arr[i]]++;
    }
    for (int i = 0; i < n; i++){
        if (arr[i] != arr[i-1] && ifPrinted[arr[i]] == false){
            cout << arr[i] << " " << check[arr[i]] << endl;
            ifPrinted[arr[i]] = true;
        }
    }
    return 0;
}