#include <iostream>
#include <vector>
using namespace std;

#define NMAX 1000002

int main(){
    int n, maxx = -1e9, gtmaxx = 0;
    vector<int> count;
    count.assign(NMAX, 0);
    cin >> n;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        count[x]++;
    }
    count.shrink_to_fit();
    for (int i = 0; i < count.size(); i++){
        if (count[i] > maxx){
            maxx = count[i];
            gtmaxx = i;
        }
    }
    cout << gtmaxx << " " << maxx;
    return 0;
}