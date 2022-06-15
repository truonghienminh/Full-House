#include <iostream>
using namespace std;

int main(){
    long long n, oddsum = 0, evensum = 0;
    cin >> n;
    while (n > 0){
        if ((n % 10) % 2 == 0) evensum += n % 10;
        else oddsum += n % 10;
        n /= 10;
    }
    cout << evensum << " " << oddsum;
    return 0;
}