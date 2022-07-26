#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    stack<string> st;
    string tmp;
    while (ss >> tmp){
        st.push(tmp);
    }
    while (!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}