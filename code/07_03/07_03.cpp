#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int c = 0, so = 0, k = 0;
    for (int i = 0; i < s.length(); i++){
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            c++;
        if (s[i] >= '0' && s[i] <= '9')
            so++;
    }
    k = s.length() - c - so;
    cout << c << " " << so << " " << k;
    return 0;
}
