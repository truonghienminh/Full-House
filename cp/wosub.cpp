#include<iostream>
using namespace std;
int n, a[100001], k;
int main(){
	bool flag = 0;
	cin>>n;
	for (int i = 0; i<n; i++) cin>>a[i];
	cin>>k;
	int i = 0, j = 0, sum = a[0], ans = 0;
	while (i < n && j < n){
		if (sum == k){
			ans = max(ans, j - i +1);
			flag = 1;
		}
		if (sum + a[j + 1] <= k){
			sum += a[j + 1];
			j++;
		}
		else {
			sum-=a[i];
			i++;
		}
	}
	if (!flag) cout<<-1;
	else cout<<ans;
}