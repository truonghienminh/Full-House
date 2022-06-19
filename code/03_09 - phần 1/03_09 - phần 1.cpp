#include <iostream>
#include <math.h>
using namespace std;

int a, b;

bool check(int x, int y){
    for (int i = 2; i <= x; i++){
        if (x % i == 0 && y % i == 0){
            return false;
        }
    }
    return true;
}
void XuLy(){
    while (a < b){
        for (int i = a + 1; i <= b; i++){
            if (check(a, i))
                cout << "(" << a << "," << i << ")" << endl;
        }
        a++;
    }
}

int main(){
    cin >> a >> b;
    XuLy();
    return 0;
}