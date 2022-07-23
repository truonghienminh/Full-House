#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<long long> v;
    long long temp = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] >= '0' && s[i] <= '9')
            temp = temp * 10 + (s[i] - '0');
        else{
            v.push_back(temp);
            temp = 0;
        }
    }
    sort(v.begin(), v.end());
    cout << v[v.size() - 1];
    return 0;
}