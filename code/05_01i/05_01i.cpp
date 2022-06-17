#include <iostream>
#define ll long long
using namespace std;

ll a[1000000];

int main(){
    int n;
    cin >> n;
    int cnt = 0,temp = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (temp < a[i]){
            temp = a[i];
            cnt = 1;
        }
        else if (temp == a[i]){
            cnt += 1;
        }
    }
    if (cnt > 1){
        for (int i = 0; i < n; i++){
            if (a[i] != temp)
                cout << a[i] << " ";
        }
    }
    else{
        ll temp1 = temp;
        for (int i = 0; i < n; i++){
            if (temp1 > a[i] && temp1 == temp)
                    temp1 = a[i];
            if (a[i]!=temp)
                temp1 = max(temp1, a[i]);
        }
        for (int i = 0; i < n; i++){
            if (a[i] != temp && a[i] != temp1)
                cout << a[i] << " ";
        }
    }
    return 0;
}