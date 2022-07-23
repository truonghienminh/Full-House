#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    string tmp;
    while (ss >> tmp){
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}