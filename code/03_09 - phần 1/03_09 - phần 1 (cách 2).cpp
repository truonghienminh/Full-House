#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        for (int j = i + 1; j <= b; j++){
            if (i != j && __gcd(i, j) == 1)
                cout << "(" << i << "," << j << ")" << endl;
        }
    }
    return 0;
}