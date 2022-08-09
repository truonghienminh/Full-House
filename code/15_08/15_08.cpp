#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> res;

void init(){
    queue<string> q;
    q.push("6");
    q.push("8");
    res.push_back("6");
    res.push_back("8");
    while (1){
        string top = q.front();
        q.pop();
        if (top.length() == 15)
            break;
        res.push_back(top + "6");
        res.push_back(top + "8");
        q.push(top + "6");    
        q.push(top + "8");     
    }
}

int main(){
    init();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<string> tmp;
        for (string x : res){
            if (x.length() == n + 1)
                break;
            tmp.push_back(x);
        }
        reverse(tmp.begin(), tmp.end()); 
        for (string x : tmp){
            cout << x << " ";
        }
        cout << '\n';
    }
    return 0;
}