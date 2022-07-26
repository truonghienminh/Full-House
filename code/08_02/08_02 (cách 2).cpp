#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    int count = 0;
    while (ss >> tmp){
        count++;
    }
    cout << count;
    return 0;
}