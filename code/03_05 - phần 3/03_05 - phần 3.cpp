#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long ans = 0;
        for(int i = 1 ; i * i <= n ; i++){
            if(n % i == 0){
                int j = n / i;
                if(j != i)
                    ans += j + i;
                else
                    ans += i;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
