#include <iostream>
#include <deque>
using namespace std;

int main(){
    int q;
    cin >> q;
    deque<int> dq;
    while (q--){
        string s;
        cin >> s;
        if (s == "PUSHFRONT"){
            int x;
            cin >> x;
            dq.push_front(x);
        }
        if (s == "PRINTFRONT"){
            if (!dq.empty())
                cout << dq.front() << endl;
            else
                cout << "NONE" << endl;
        }
        if (s == "POPFRONT"){
            if (!dq.empty())
                dq.pop_front();
        }
        if (s == "PUSHBACK"){
            int x;
            cin >> x;
            dq.push_back(x);
        }
        if (s == "PRINTBACK"){
            if (!dq.empty())
                cout << dq.back() << endl;
            else
                cout << "NONE" << endl;
        }
        if (s == "POPBACK"){
            if (!dq.empty())
                dq.pop_back();
        }
    }
    return 0;
}