#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    string s="";
    while(n>0){
        s = char(n%2+48)+s;
        n /= 2;
    }
    cout << s;
    return 0;
}