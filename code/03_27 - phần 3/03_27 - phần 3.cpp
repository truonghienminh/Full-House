#include <iostream>
using namespace std;

long long dao(long long n){
    long long s = 0;
    int r;
    while (n > 0){
        r = n % 10;
        s = s*10 + r;
        n /= 10;
    }
    return s;
}

int main(){
    long long n;
    cin >> n;
    long long s = dao(n);
    long long m = n;
    int c2 = 0, c3 = 0, c5 = 0, c7 = 0;
    int r;
    while (m > 0){
        int r = m % 10;
        if (r == 2) c2++;
        if (r == 3) c3++;
        if (r == 5) c5++;
        if (r == 7) c7++;
        m /= 10;
    }
    while (s > 0){
        int r = s%10;
        if (r == 2 && c2 >= 1){
            cout << "2 " << c2 << endl;
            c2 = 0;
        }
        if (r == 3 && c3 >= 1){
            cout << "3 " << c3 << endl;
            c3 = 0;
        }
        if (r == 5 && c5 >= 1){
            cout << "5 " << c5 << endl;
            c5 = 0;
        }
        if (r == 7 && c7 >= 1){
            cout << "7 " << c7 << endl;
            c7 = 0;
        }
        s /= 10;
    }
    return 0;
}
