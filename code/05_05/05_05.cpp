#include <iostream>
using namespace std;

int main(){
    int n, m = 0, x;
    bool check = 1;
    cin >> n;
    while (n--){
        cin >> x;
       	if (x == 25)
       	    m += x;
        else{
            if (x - 25 > m){
                check = 0;
                break;
            }
        }
    }
    if (check) cout << "YES";
    else 
        cout << "NO";
    return 0;
}