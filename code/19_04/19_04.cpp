#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    unsigned long long k = 0;
    unsigned long long t = 1;
    char a[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
    string hex1;
    cin >> hex1;
    for (int i = hex1.size() - 1; i >= 0; i--){
        if (binary_search(a, a + 6, hex1[i])){
            k += ((lower_bound(a, a + 6, hex1[i]) - a) + 10) * t;
            t *= 16;
        }
        else{
            k += (hex1[i] - 48) * t;
            t *= 16;
        }
    }
    cout << k << "\n";
    return 0;
}