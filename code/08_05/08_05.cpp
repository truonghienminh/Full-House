#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(string a, string b){
    return a.length() < b.length();
}

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    vector<string> v;
    string tmp;
    while (ss >> tmp){
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    sort(v.begin(), v.end(), check);
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}