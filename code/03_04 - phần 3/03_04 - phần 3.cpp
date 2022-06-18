#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        int count = 0;
        for (int i = a; i <= b; i++){
            int temp = sqrt(i);
            if (temp*temp == i)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
