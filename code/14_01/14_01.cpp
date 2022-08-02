#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    stack<int> st;
    cin.ignore();
    while (t--){
        string s;
        cin >> s;
        if (s == "push"){
            int x;
            cin >> x;
            st.push(x);
        }
        else if (s == "pop" && !st.empty()){
            st.pop();
        }
        else if (s == "show"){
            if (!st.empty()){
                stack<int> temp = st;
                vector<int> v;
                while (!temp.empty()){
                    v.push_back(temp.top());
                    temp.pop();
                }
                reverse(v.begin(), v.end());
                for (auto x : v){
                    cout << x << " ";
                }
                cout << '\n';
            }
            else
                cout << "empty\n";
        }
    }
    return 0;
}