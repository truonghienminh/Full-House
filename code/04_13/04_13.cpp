#include <iostream>
using namespace std;

int main(){
    int64_t n;
    cin >> n;
    int res;
    do{
        res = n % 10;
    }while(n /= 10);
    cout << res;
    return 0;
}