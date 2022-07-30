#include <iostream>
#include <set>
#include <sstream>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        set<string> se;
        string tmp;
        while (ss >> tmp){
            se.insert(tmp);
        }
        cout << se.size() << endl;
    }
    return 0;
}