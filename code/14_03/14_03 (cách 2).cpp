#include <iostream>
#include <stack>
#include <string>
#include <map>
using namespace std;

map<char, int> mp = {{'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}, {'%', 2}, {'^', 3}, {'(', 0}};

void solve(){
    string s, res = "";
    getline(cin, s);
    stack<char> st;
    for (int i = 0; i < s.length(); i++){
        char c = s[i];
        if (c != ' '){
            if (isalnum(s[i]))
                res += c;
            else{
                cout << res;
                res = "";
                if (c == '(')
                    st.push(c);
                else{
                    if (c == ')'){
                        while (st.top() != '('){
                            cout << st.top();
                            st.pop();
                        }
                        st.pop();
                    }
                    else{
                        while (!st.empty() && mp[c] <= mp[st.top()]){
                            cout << st.top();
                            st.pop();
                        }
                        st.push(c);
                    }
                }
            }
        }
    }
    if (res != "")
        cout << res;
    while (!st.empty()){
        cout << st.top();
        st.pop();
    }
    cout << '\n';
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        solve();
    }
    return 0;
}