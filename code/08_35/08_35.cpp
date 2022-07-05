#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int a[20];
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == 'I')
                a[i] = 1;
            if (s[i] == 'V')
                a[i] = 5;
            if (s[i] == 'X')
                a[i] = 10;
            if (s[i] == 'L')
                a[i] = 50;
            if (s[i] == 'C')
                a[i] = 100;
            if (s[i] == 'D')
                a[i] = 500;
            if (s[i] == 'M')
                a[i] = 1000;
        }
        int k = a[s.length() - 1];
        for (int i = s.length() - 1; i > 0; i--){
            if (a[i] > a[i-1])
                k -= a[i - 1];
            else if (a[i] == a[i-1] || a[i] < a[i-1])
                k += a[i - 1];
        }
        cout << k << endl;
    }
    return 0;
}