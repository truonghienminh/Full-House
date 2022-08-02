#include <iostream>
#include <stack>
using namespace std;

int main(){
    int q;
    cin >> q;
    stack<int> st;
    cin.ignore();
    while (q--){
        string s;
        cin >> s;
        if (s == "PUSH"){
            int x;
            cin >> x;
            st.push(x);
        }
        if (s == "POP" && !st.empty()){
            st.pop();
        }
        if (s == "PRINT"){
            if (!st.empty())
                cout << st.top() << endl;
            else
                cout << "NONE\n";
        }
    }
    return 0;
}