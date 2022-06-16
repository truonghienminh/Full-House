#include <iostream>
#include <algorithm>
using namespace std;

bool check(string s){
    string s1 = s;
    reverse(s.begin(), s.end());
    if (s == s1) return true;
    return false;
}

int main(){
    string s;
    cin >> s;
    if (check(s))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
