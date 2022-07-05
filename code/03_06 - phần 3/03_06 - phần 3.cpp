#include <iostream>
#include <cmath>
using namespace std;

#define FASTINPUT();    ios::sync_with_stdio(0);\
                        cin.tie(0);\
                        cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
ull n;

void inp(){
    cin >> n;
}

void out(){
    int count = 0;
    for (ull i = 1; i <= sqrt(n); i++){
        if (n % i == 0)
            count++;
    }
    count *= 2;
    if (n % (int)sqrt(n) == 0)
        count--;
    cout << count << endl;
}

int main(){
    FASTINPUT();
    int T;
    cin >> T;
    while (T--){
        inp();
        out();
    }
    return 0;
}
