#include <iostream>
#include <vector>
using namespace std;
#define NMAX 10000001
typedef long long ll;
ll n;
bool snt[NMAX];
vector<int> v;
void era(){
    for (int i = 2; i <= n ;i++){
        if (!snt[i]) 
            for (int j = 2*i; j <= n; j += i){
                snt[j] = 1;
            }
    }
}
bool check(long long n){
	int end = n%10;
	while (n > 0){
		n /= 10;
		if (n % 10 > end) {
			return false;
			break;
		}
	}
    return true;
}
void out(){
	int cnt = 0;
    for (int i = 2; i <= n; i++){
        if (!snt[i] && check(i)){
            cnt++;
            v.push_back(i);
        }
    }
    cout << cnt << endl;
    for (auto x : v){
    	cout << x << " ";
    }
}
void inp(){
	cin >> n;
    era();
}
int main(){
    inp();
    out();
    return 0;
}