#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char a[10000], b[10000];
    cin >> a >> b;
    if (strstr(b, a) != NULL)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}