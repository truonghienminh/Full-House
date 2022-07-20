#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n = 0;
        int c = 0, l = 0;
        char kitu =' ';
        while (kitu == ' '){
            int x;
            cin >> x;
            n++;
            if (x % 2 == 0)
                c++;
            else
                l++;
            kitu = getchar();
        }
        if (n % 2 == 0 && c > l || n % 2 != 0 && l > c){
            cout << "YES" << endl;
        }
        else
		    cout << "NO" << endl;
    }
    return 0;
}