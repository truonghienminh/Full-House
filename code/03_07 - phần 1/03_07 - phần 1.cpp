#include<bits/stdc++.h>
using namespace std;
#define n 10001
bool snt[n];

void era(){
    for (int i = 2; i <= n ;i++){
        if (!snt[i]) 
            for (int j = 2*i; j <= n; j += i){
                snt[j] = 1;
            }
    }
}

void out(int a){
    for (int i = 2; i <= a; i++){
        if (!snt[i] && !snt[a-i]){
            cout << i << " " << a-i << endl;
            break;
        }
    }
}

void inp(){
    era();
    int T; 
    cin >> T;
    for (int i = 0; i < T; i++){
        int x; 
        cin >> x;
        out(x);
    }
}

int main(){
    inp();
    return 0;
}