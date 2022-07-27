#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    double d = b * b - 4 * a * c;
    if (a == 0){
        if (b == 0 && c == 0)
            cout << "INF";
        else if (b == 0 && c != 0)
            cout << "NO";
        else
            cout << fixed << setprecision(2) << -c / b; // bx + c = 0 => x = -c/b;
    }
    else{
        if (d > 0)
            cout << fixed << setprecision(2) << (float)(-b + sqrt(d)) / (2 * a) << " " << (float)(-b - sqrt(d)) / (2 * a);
        else if (d == 0){
            cout << fixed << setprecision(2) << (float)(-b) / (2 * a);
            return 0;
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    return 0;
}
