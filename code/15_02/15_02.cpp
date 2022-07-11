#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio();
    cin.tie(0), cout.tie(0);
    int Q;
    cin >> Q;
    queue<string> a;
    while (Q--){
        string s, n;
        cin >> s;
        if (s == "PUSH"){
            cin >> n;
            a.push(n);
        }
        if (s == "POP"){
            if (!a.empty())
                a.pop();
        }
        if (s == "PRINTFRONT"){
            if (!a.empty())
                cout << a.front() << endl;
            else 
                cout << "NONE" << endl;
        }
    }
    return 0;
}