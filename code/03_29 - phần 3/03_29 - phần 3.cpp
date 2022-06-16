#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long a[100];
    fill_n(a, 100, 0);
    a[0] = 0;
    a[1] = 1;
    int m = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout<<a[j]<<" ";
            cout<<"\n";
            long long tam1=1,tam2=0;
        for (int j=2; j<i+1; j++) {
            tam2=a[j];
            a[j]+=tam1;
            tam1=tam2;
        }
        a[i+1]=1;
    }
    return 0;
}
