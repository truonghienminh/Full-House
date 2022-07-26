#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    vector<string> v;
    string tmp;
    while (ss >> tmp){
        v.push_back(tmp);
    }
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
    return 0;
}