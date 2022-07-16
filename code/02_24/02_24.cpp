#include <iostream>
using namespace std;

int C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}

int main(){
	long long n, m;
	cin >> n >> m; 
	cout <<  C(m - 1, n - 1); 
	return 0;
}