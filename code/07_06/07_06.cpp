#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int count[256] = {};
    int res = -1e9;
    for (int i = 0; i < s.length(); i++){
        count[s[i]]++;
        res = max(res, count[s[i]]);
    }
    for (int i = (int)'z'; i >= 'A'; i--){
        if (count[i] >= res){
            cout << (char)i;
            break;
        }
    }
    return 0;
}