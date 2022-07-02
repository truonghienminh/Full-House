#include <iostream>
using namespace std;

int UCLN(int64_t a,int64_t b){
    if (b == 0) return a;
    if (a % b == 0) return b;
    return UCLN(b, a % b);
}

int main(){
    int64_t a, b;
    cin >> a >> b;
    cout << UCLN(a, b);
    return 0;
}