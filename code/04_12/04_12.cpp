#include <iostream>
using namespace std;

int UCLN(int64_t a,int64_t b){
    if (b == 0) return a;
    return UCLN(b, a % b);
}

int main(){
    int64_t a, b;
    cin >> a >> b;
    cout << UCLN(a, b);
    return 0;
}