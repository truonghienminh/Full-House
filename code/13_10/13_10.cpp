#include <iostream>
#include <unordered_map>
using namespace std;

const int MAX = 1e6 + 11;
long long cnt = 0, a[MAX];
unordered_map<long long, int> m;

int main(){
    long long n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long sum = 0;
    for (int i = 0; i < n; i++){
        sum = sum + a[i];
        if (sum == k)
            cnt++;
        if (m[sum - k] != 0)
            cnt += m[sum - k];
        m[sum]++;
    }
    cout << cnt;
    return 0;
}