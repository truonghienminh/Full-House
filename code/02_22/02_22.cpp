#include <iostream>
using namespace std;

int main(){
    long long n, chan = 0, le = 0;
    cin >> n;
    while (n > 0){
        if (n % 2 == 0)
            chan++;
        else
            le++;
        n /= 10;
    }
    if (chan == le)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
