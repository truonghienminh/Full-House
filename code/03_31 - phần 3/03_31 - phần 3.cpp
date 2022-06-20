#include <iostream>
using namespace std;
#define NMAX 1001
int x,y;

long long lt(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

void out(){
	cout << lt(x,y) << endl;
}

void inp(){
	cin >> x >> y;
}

int main(){
	int t; 
	cin >> t;
    while (t--){
		inp();
    	out();
	}
	return 0;
}