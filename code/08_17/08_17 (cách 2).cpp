#include <iostream>
#include <set>
#include <sstream>
#include <string>
using namespace std;

int main(){
    string s1, s2, w;
    getline(cin, s1);
    getline(cin, s2);
    set<string> st1, st2;
    stringstream ss2(s2);
    while (ss2 >> w){
        st2.insert(w);
    }
    stringstream ss1(s1);
    while (ss1 >> w){
        if (st2.find(w) == st2.end())
            st1.insert(w);
    }
    for (auto i : st1)
        cout << i << " ";
    return 0;
}