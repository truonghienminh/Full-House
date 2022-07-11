#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios_base::sync_with_stdio();
    cin.tie(0), cout.tie(0);
    int Q;
    cin >> Q;
    deque<string> a;
    while (Q--){
        string s, n;
        cin >> s;
        if (s == "PUSHFRONT"){
            cin >> n;
            a.push_front(n);
        }
        if (s == "PUSHBACK"){
            cin >> n;
            a.push_back(n);
        }
        if (s == "PRINTFRONT"){
            if (!a.empty())
                cout << a.front() << endl;
            else
                cout << "NONE" << endl;
        }
        if (s == "PRINTBACK"){
            if (!a.empty())
                cout << a.back() << endl;
            else
                cout << "NONE" << endl;
        }
        if (s == "POPFRONT")
            if (!a.empty())
                a.pop_front();
        if (s == "POPBACK")
            if (!a.empty())
                a.pop_back();
    }
    return 0;
}