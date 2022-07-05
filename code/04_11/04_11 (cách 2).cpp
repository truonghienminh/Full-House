#include <iostream>
using namespace std;

void reverse(int64_t n){
    if(n != 0){
        cout << n % 10;
        reverse(n / 10);
    }
}

int main(){
    int64_t n;
    cin >> n;
    reverse(n);
    return 0;
}
