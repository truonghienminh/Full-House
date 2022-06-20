#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 1; i <= n; i++){
        cin >> a[i];
	}
	for (int i = 1; i <= n-1; i++){
        for (int j = i + 1; j <= n; j++){
            if (a[i] < a[j])
                swap(a[i],a[j]);
        }
	}
	int res = 0;
	for (int i = 1; i <= n; i++){
		res += a[i];
		for (int j = i + 1; j <= n; j++){
			if (a[j] != 0)
                a[j]--;
		}
	}
	cout << res;
	return 0;
}
