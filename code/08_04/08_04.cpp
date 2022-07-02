#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define maxn 100005
string a[maxn];

int main() {
    string s;
    getline(cin, s);
    string temp = "";
    s = s + ' ';
    int dem = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] != ' ')
            temp += s[i];
        else{
            a[dem++] = temp;
            temp = "";
        }
    }
    sort(a, a + dem);
    for (int i = 0; i < dem; i++){
        cout << a[i] << ' ';
    }
    return 0;
}
