#include <iostream>
#include <queue>
using namespace std;

void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int n;

void inp(){
    cin >> n;
}

void out(){
    queue<int> q;
    q.push(9);
    while (q.front() % n != 0){
        q.push(q.front() * 10);
        q.push(q.front() * 10 + 9);
        q.pop();
    }
    cout << q.front() << endl;
}

int main(){
    FASTINPUT();
   	int T;
    cin >> T;
    while (T--){
        inp();
        out();
    }
    return 0;
}