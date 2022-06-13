#include <iostream>
using namespace std;

int main(){
    int a;
    int d,w,y;
    cin >> a;
    y = a / 365;
    if ((a - y*365) >= 7){
        w = (a - y*365)/7;
        d = a - y*365 - w*7;
    }
    else{
        d = a - y*365;
    }
    cout << y << " " << w << " " << d;
    return 0;
}