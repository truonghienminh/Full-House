#include <iostream>
using namespace std;

void in1(int n){
    for (int i = 2; i * i <= n; ++i){
        while (n % i == 0){
            cout << i << ' ';
            n /= i;
        }
    }
    if (n != 1)
        cout << n;
}

void in2(int n){
    for (int i = 2; i * i <= n; ++i){
        if (n % i == 0){
            cout << i << ' ';
            while (n % i == 0){
                n /= i;
            }
        }
    }
    if (n != 1)
        cout << n;
}

void in3(int n){
    for (int i = 2; i * i <= n; ++i){
        int cnt = 0;
        if (n % i == 0){
            while (n % i == 0){
                ++cnt;
                n /= i;
            }
            cout << i << "(" << cnt << ")"
                 << " ";
        }
    }
    if (n != 1)
        cout << n << "(1)";
}

void in4(int n){
    for (int i = 2; i * i <= n; ++i){
        while (n % i == 0){
            cout << i << "x";
            n /= i;
        }
    }
    if (n != 1)
        cout << n;
}

void in5(int n){
    for (int i = 2; i * i <= n; ++i){
        int cnt = 0;
        if (n % i == 0){
            while (n % i == 0){
                ++cnt;
                n /= i;
            }
            cout << i << "^" << cnt << "*";
        }
    }
    if (n != 1)
        cout << n << "^1";
}
int main(){
    int n;
    cin >> n;
    in1(n);
    cout << '\n';
    in2(n);
    cout << '\n';
    in3(n);
    cout << '\n';
    in4(n);
    cout << '\n';
    in5(n);
    return 0;
}