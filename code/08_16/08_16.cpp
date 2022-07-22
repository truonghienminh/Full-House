#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    string x;
    cin >> x;
    stringstream ss(s);
    vector<string> v;
    string tmp;
    while (ss >> tmp){
        v.push_back(tmp);
    }
    for (int i = 0; i  < v.size(); i++){
        if (v[i] != x)
            cout << v[i] << " ";
    }
    return 0;
}