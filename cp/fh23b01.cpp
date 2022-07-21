#include <iostream>
using namespace std;

int main(){
    long long a, b;
    long long *ptra = &a, *ptrb = &b;
    cin >> a >> b;
    cout << *ptra << " " << *ptrb;
}