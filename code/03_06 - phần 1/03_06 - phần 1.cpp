#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0, i = 2;
    while (count < n){
        bool b = true;
        for (int j = 2; j <= sqrt(i); j++){
            if (i % j == 0){
                b = false;
                break;
            }
        }
        if (b){
            cout << i << endl;
            count++;
        }
        i++;
    }
    return 0;
}
