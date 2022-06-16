#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        long long sum = 0;
        while (n > 0){
            sum += n % 10;
            n /= 10;
        }
        cout << sum << endl;
    }
    return 0;
}
