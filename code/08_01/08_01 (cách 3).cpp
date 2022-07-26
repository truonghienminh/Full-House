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
        cout << tmp << endl;
    }
    return 0;
}