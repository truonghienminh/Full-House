#include <iostream>
#include <string>
#include <map>
#include <sstream>
using namespace std;

string s;
int dem = 1;

void inp(){
    bool check = 0;
    string word;
    map<string, int> m;
    getline(cin, s);
    stringstream ss(s);
    while (ss >> word){
        m[word]++;
        if (m[word] > 1){
            cout << "#Test " << dem << ": " << word << endl;
            check = 1;
            break;
        }
    }
    if (!check)
        cout << "#Test " << dem << ": " << -1 << endl;
    dem++;
}

int main(){
    int T;
    cin >> T;
    cin.ignore();
    while (T--){
        inp();
    }
    return 0;
}