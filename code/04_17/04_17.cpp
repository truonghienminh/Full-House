#include <iostream>
using namespace std;

int main(){
    int64_t n;
    cin >> n;
    bool check = 1;
    while (n > 0){
        int s = n%10;
        if (s % 2 == 0){
            check = 0;
            break;
        }
        n /= 10;
    }
    cout << check;
    return 0;
}
