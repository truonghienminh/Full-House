#include <bits/stdc++.h>
using namespace std;

#define NMAX 1000001
long long n;

bool arr[NMAX];

void era(){
    memset(arr, 0, NMAX);
    for (int i = 2; i <= NMAX ; i++){
        if (!arr[i])
            for (int j = 2 * i; j <= NMAX; j += i){
                arr[j] = 1;
            }
    }
}
void inp(){
	cin >> n;
}
void out(){
	int temp = 0;
	for (int i = 2; i <= sqrt(n); i++){
		if (!arr[i])
            temp++;
	}
	cout << temp << '\n';
}
int main(){
	era();
	int T;
    cin >> T;
	while (T--){
        inp();
        out();
	}
	return 0;
}
