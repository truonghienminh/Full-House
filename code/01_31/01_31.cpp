#include <iostream>
using namespace std;

int main(){
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    float dtb = (a + b + c*2 + d*3)/7.0;
    if (dtb >= 8)
        cout << "GIOI";
    else if (dtb < 8 && dtb >= 6.5)
        cout << "KHA";
    else if (dtb < 6.5 && dtb >= 5)
        cout << "TRUNG BINH";
    else
        cout << "YEU";
    return 0;
}